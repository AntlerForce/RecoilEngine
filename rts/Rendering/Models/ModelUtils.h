#pragma once

#include <vector>
#include <optional>
#include <string>

#include "3DModel.h"

class LuaTable;

namespace Skinning {
	struct SkinnedMesh {
		std::vector<SVertexData> verts;
		std::vector<uint32_t> indcs;
	};

	static std::vector<size_t> boneWeights;

	uint16_t GetBoneID(const SVertexData& vert, size_t wi);

	void ReparentMeshesTrianglesToBones(S3DModel* model, const std::vector<SkinnedMesh>& meshes);
	void ReparentCompleteMeshesToBones (S3DModel* model, const std::vector<SkinnedMesh>& meshes);
};

namespace ModelUtils {
	struct ModelParams {
		std::optional<std::string> tex1;
		std::optional<std::string> tex2;
		std::optional<float3> relMidPos;
		std::optional<float3> mins;
		std::optional<float3> maxs;
		std::optional<float> radius;
		std::optional<float> height;
	};

	// Iterate over the model and calculate its overall dimensions
	void CalculateModelDimensions(S3DModel* model, S3DModelPiece* piece);
	// Calculate model radius from the min/max extents
	void CalculateModelProperties(S3DModel* model, const LuaTable& modelTable);
	// Calculate model radius from the min/max extents
	void CalculateModelProperties(S3DModel* model, const ModelParams& modelParams);
}

namespace ModelLog {
	// Verbose logging of model properties
	void LogModelProperties(const S3DModel& model);
}
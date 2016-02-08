#pragma once

# include <list>
# include <memory>
# include "MiniEngine/RenderSystem.h"
# include "Mesh.h"
# include "Material.h"

namespace MiniEngine
{
	class Model {
	public:
		Model(RenderSystem& system);
		virtual ~Model();

		virtual bool                loadFromFile(const std::string &file);
		bool                        isLoaded() const;
		unsigned int                getVertexsSize() const;
		unsigned int                getIndicesSize() const;
		const std::list<std::shared_ptr<Mesh> > &getMeshs();

	protected:
		RenderSystem& 						_system;
		std::list<std::shared_ptr<Mesh> >	_meshs;
		std::list<Material*>				_materials;
		bool                                _isLoaded;
	};
}
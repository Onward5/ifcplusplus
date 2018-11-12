/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcOffsetCurve.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcOffsetCurve 
IfcOffsetCurve::IfcOffsetCurve() {}
IfcOffsetCurve::IfcOffsetCurve( int id ) { m_entity_id = id; }
IfcOffsetCurve::~IfcOffsetCurve() {}
shared_ptr<BuildingObject> IfcOffsetCurve::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcOffsetCurve> copy_self( new IfcOffsetCurve() );
	if( m_BasisCurve ) { copy_self->m_BasisCurve = dynamic_pointer_cast<IfcCurve>( m_BasisCurve->getDeepCopy(options) ); }
	return copy_self;
}
void IfcOffsetCurve::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCOFFSETCURVE" << "(";
	if( m_BasisCurve ) { stream << "#" << m_BasisCurve->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcOffsetCurve::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcOffsetCurve::toString() const { return L"IfcOffsetCurve"; }
void IfcOffsetCurve::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOffsetCurve, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BasisCurve, map );
}
void IfcOffsetCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcCurve::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "BasisCurve", m_BasisCurve ) );
}
void IfcOffsetCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcOffsetCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcOffsetCurve::unlinkFromInverseCounterparts()
{
	IfcCurve::unlinkFromInverseCounterparts();
}
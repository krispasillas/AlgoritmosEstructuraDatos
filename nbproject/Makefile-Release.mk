#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/1_Ejercicio.o \
	${OBJECTDIR}/2_Ejercicio.o \
	${OBJECTDIR}/3_Ejercicio.o \
	${OBJECTDIR}/4_Ejercicio.o \
	${OBJECTDIR}/5_EjercicioClass_TrianguloRectangulo.o \
	${OBJECTDIR}/6_EjercicioClass_TrianguloRectangulo.o \
	${OBJECTDIR}/7_EjercicioClass_Sueldo.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_estructura_datos.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_estructura_datos.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_estructura_datos ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/1_Ejercicio.o: 1_Ejercicio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/1_Ejercicio.o 1_Ejercicio.cpp

${OBJECTDIR}/2_Ejercicio.o: 2_Ejercicio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2_Ejercicio.o 2_Ejercicio.cpp

${OBJECTDIR}/3_Ejercicio.o: 3_Ejercicio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/3_Ejercicio.o 3_Ejercicio.cpp

${OBJECTDIR}/4_Ejercicio.o: 4_Ejercicio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/4_Ejercicio.o 4_Ejercicio.cpp

${OBJECTDIR}/5_EjercicioClass_TrianguloRectangulo.o: 5_EjercicioClass_TrianguloRectangulo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/5_EjercicioClass_TrianguloRectangulo.o 5_EjercicioClass_TrianguloRectangulo.cpp

${OBJECTDIR}/6_EjercicioClass_TrianguloRectangulo.o: 6_EjercicioClass_TrianguloRectangulo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/6_EjercicioClass_TrianguloRectangulo.o 6_EjercicioClass_TrianguloRectangulo.cpp

${OBJECTDIR}/7_EjercicioClass_Sueldo.o: 7_EjercicioClass_Sueldo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/7_EjercicioClass_Sueldo.o 7_EjercicioClass_Sueldo.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

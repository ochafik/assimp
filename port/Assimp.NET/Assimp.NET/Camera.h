/*
---------------------------------------------------------------------------
Open Asset Import Library (ASSIMP)
---------------------------------------------------------------------------

Copyright (c) 2006-2008, ASSIMP Development Team

All rights reserved.

Redistribution and use of this software in source and binary forms,
with or without modification, are permitted provided that the following
conditions are met:

 * Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.

 * Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.

 * Neither the name of the ASSIMP team, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission of the ASSIMP Development Team.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------------
 */

#pragma once

#include "Matrix4x4.h"
#include "Vector3D.h"

using namespace System;

namespace AssimpNET
{
	ref class Camera
	{
	public:
		Camera(void);
		~Camera(void);

		void GetCameraMatrix(Matrix4x4^ out);

		property float mAspect
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}
		property float mNearClipPlane
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}
		property float mFarClipPlane
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}
		property float mHorizontalFOV
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}

		property Vector3D^ mLookAt
		{
			Vector3D^ get(){throw gcnew System::NotImplementedException();}
			void set(Vector3D^ value){throw gcnew System::NotImplementedException();}
		}
		property Vector3D^ mPosition
		{
			Vector3D^ get(){throw gcnew System::NotImplementedException();}
			void set(Vector3D^ value){throw gcnew System::NotImplementedException();}
		}
		property Vector3D^ mUp
		{
			Vector3D^ get(){throw gcnew System::NotImplementedException();}
			void set(Vector3D^ value){throw gcnew System::NotImplementedException();}
		}

		property String^ mName
		{
			String^ get(){throw gcnew System::NotImplementedException();}
			void set(String^ value){throw gcnew System::NotImplementedException();}
		}

	};
}//namespace
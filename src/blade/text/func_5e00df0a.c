/* auto-transcribed gap function 0x5E00DF0A (198 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e00df0a(void)
{
    __asm {
            mov edi, edi
            push ss
            __emit 0xa5 /* movsd dword ptr es:[edi], dword ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi - 0xd], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi - 0xd], bl: MSVC6 cannot encode natively */
            __emit 0xf3 /* add byte ptr [esi - 0xd], bl: MSVC6 cannot encode natively */
            __emit 0xa1 /* mov eax, dword ptr [0xa3c45e00]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov eax, dword ptr [0xa3c45e00]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov eax, dword ptr [0xa3c45e00]: MSVC6 cannot encode natively */
            __emit 0xc4 /* mov eax, dword ptr [0xa3c45e00]: MSVC6 cannot encode natively */
            __emit 0xa3 /* mov eax, dword ptr [0xa3c45e00]: MSVC6 cannot encode natively */
            add byte ptr [esi - 0x20], bl
            xchg esi, eax
            add byte ptr [esi - 0x7d], bl
            pushfd
            add byte ptr [esi - 0x6f], bl
            cdq
            add byte ptr [esi - 0x4c], bl
            __emit 0xab /* stosd dword ptr es:[edi], eax: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi - 0x73], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi - 0x73], bl: MSVC6 cannot encode natively */
            __emit 0x8d /* add byte ptr [esi - 0x73], bl: MSVC6 cannot encode natively */
            __emit 0xaa /* stosb byte ptr es:[edi], al: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi + 0x22], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi + 0x22], bl: MSVC6 cannot encode natively */
            __emit 0x22 /* add byte ptr [esi + 0x22], bl: MSVC6 cannot encode natively */
            __emit 0xab /* stosd dword ptr es:[edi], eax: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi - 0x61], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi - 0x61], bl: MSVC6 cannot encode natively */
            __emit 0x9f /* add byte ptr [esi - 0x61], bl: MSVC6 cannot encode natively */
            __emit 0xa6 /* cmpsb byte ptr [esi], byte ptr es:[edi]: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi + 0x5f], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi + 0x5f], bl: MSVC6 cannot encode natively */
            __emit 0x5f /* add byte ptr [esi + 0x5f], bl: MSVC6 cannot encode natively */
            test al, 0
            pop esi
            __emit 0x82 /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            __emit 0xa7 /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            __emit 0x5e /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            __emit 0x0a /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            __emit 0xb6 /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            __emit 0x00 /* and byte ptr [edi - 0x49f5a200], 0: MSVC6 cannot encode natively */
            pop esi
            ret
            mov bl, 0
            pop esi
            sbb esi, dword ptr [ebp - 0x53e8a200]
            add byte ptr [esi + 0x35], bl
            mov al, 0
            pop esi
            add eax, 0x895e00ae
            mov ecx, 0xb8fa5e00
            add byte ptr [esi + 0x43], bl
            mov ecx, 0xb7685e00
            add byte ptr [esi + 0x29], bl
            mov eax, 0xb7cc5e00
            add byte ptr [esi - 0x57], bl
            __emit 0xc8 /* enter 0x5e00, -0x7a: MSVC6 cannot encode natively */
            __emit 0x00 /* enter 0x5e00, -0x7a: MSVC6 cannot encode natively */
            __emit 0x5e /* enter 0x5e00, -0x7a: MSVC6 cannot encode natively */
            __emit 0x86 /* enter 0x5e00, -0x7a: MSVC6 cannot encode natively */
            __emit 0xc5 /* lds eax, ptr [eax]: MSVC6 cannot encode natively */
            __emit 0x00 /* lds eax, ptr [eax]: MSVC6 cannot encode natively */
            pop esi
            push edi
            mov dword ptr [eax], 0xba735e
            pop esi
            push ss
            rol byte ptr [eax], 0x5e
            and al, 0xbd
            add byte ptr [esi + 0x41], bl
            iretd
            add byte ptr [esi + 0x1a], bl
            into
            add byte ptr [esi - 0x51], bl
            into
            add byte ptr [esi + 0x38], bl
            retf 0x5e00
            out dx, eax
            retf
            add byte ptr [esi + 0x1a], bl
            retf
            add byte ptr [esi + 0x16], bl
            fild dword ptr [eax]
            pop esi
            __emit 0x82 /* sbb al, 0: MSVC6 cannot encode natively */
            __emit 0xd8 /* sbb al, 0: MSVC6 cannot encode natively */
            __emit 0x00 /* sbb al, 0: MSVC6 cannot encode natively */
            pop esi
            or eax, 0xc15e00da
            iretd
            add byte ptr [esi + 0x75], bl
            __emit 0xd4 /* aam 0: MSVC6 cannot encode natively */
            __emit 0x00 /* aam 0: MSVC6 cannot encode natively */
            __emit 0x5e /* pop esi: MSVC6 cannot encode natively */
            add edx, edx
            add byte ptr [esi - 0x39], bl
            fiadd word ptr [eax]
            pop esi
            dec edx
            fiadd word ptr [eax]
            pop esi
            __emit 0x8c /* mov esi, ds: MSVC6 cannot encode natively */
            __emit 0xde /* mov esi, ds: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi - 0x5b], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi - 0x5b], bl: MSVC6 cannot encode natively */
            __emit 0xa5 /* add byte ptr [esi - 0x5b], bl: MSVC6 cannot encode natively */
            fadd qword ptr [eax]
            pop esi
            __emit 0x6c /* insb byte ptr es:[edi], dx: MSVC6 cannot encode natively */
            __emit 0xdd /* fld qword ptr [eax]: MSVC6 cannot encode natively */
            __emit 0x00 /* fld qword ptr [eax]: MSVC6 cannot encode natively */
            pop esi
            or eax, 0x905e00dd
            nop
            nop
            nop
    }
}

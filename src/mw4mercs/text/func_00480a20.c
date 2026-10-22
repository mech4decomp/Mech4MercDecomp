/*
 * FUN_00480a20 (137 B) — __thiscall MLRIndexedPrimitiveBase stream-write
 * helper. Writes member buffers (vertex/normal/index arrays) to a stream
 * object (ESI, vtable at [ESI]) via its +0x24 method, then calls
 * FUN_00491340. RET 0x4 (1 stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491340(void);

__declspec(naked) void FUN_00480a20(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x10]
        mov     edx, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+4]
        mov     ecx, dword ptr [eax]
        push    4
        lea     eax, [esp+0x10]
        mov     dword ptr [esp+0x10], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     ebx, [edi+0x18]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_80a66
        mov     edx, dword ptr [edi+0x14]
        mov     eax, dword ptr [esi]
        lea     ecx, [ebx+ebx*2]
        shl     ecx, 2
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
    L_80a66:
        mov     eax, dword ptr [esi]
        push    4
        lea     ebx, [edi+0x20]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_80a8c
        mov     ecx, dword ptr [edi+0x1c]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx*8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0x24]
    L_80a8c:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi+0x12]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    esi
        lea     ecx, [edi+0x2c]
        call    FUN_00491340
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}

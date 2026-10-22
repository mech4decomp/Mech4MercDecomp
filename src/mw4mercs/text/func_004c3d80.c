/*
 * FUN_004C3D80 (193 B) — MLR camera-element state update (thiscall, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fcb0(void *this);
extern void FUN_0041fcd0(void *this);
extern void FUN_00416110(void *this);
extern void FUN_00491280(void *this);
extern void FUN_004c8a50(void *this);

extern int g_7daa38;

__declspec(naked) void __fastcall FUN_004c3d80(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x274]
        push    edi
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        call    FUN_0041fcd0
        mov     esi, dword ptr [edi + 0x140]
        test    esi, esi
        jnz     l_have_obj

        mov     ecx, dword ptr [g_7daa38]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      l_alloc_fail

        mov     ecx, esi
        call    FUN_00491280
        mov     dword ptr [esi + 0x18], 0x0
        jmp     l_alloc_done
    l_alloc_fail:
        xor     esi, esi
    l_alloc_done:
        push    esi
        mov     ecx, edi
        call    FUN_004c8a50

    l_have_obj:
        mov     ecx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x10]
        or      ecx, 0xc3e0000
        mov     dword ptr [esi + 0x8], ecx
        mov     ecx, dword ptr [esi + 0x4]
        and     eax, 0xf3e3ffff
        or      eax, 0x220000
        and     ecx, 0xffffffef
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [esi + 0xc]
        or      ecx, 0x4000
        and     eax, 0xf3c1ffff
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [edi + 0x18]
        or      edx, 0x4010
        and     ecx, 0xffffbfef
        mov     dword ptr [esi + 0x10], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x14], ecx
        and     eax, 0xffffff3f
        mov     ecx, edi
        mov     dword ptr [edi + 0x10], 0x0
        mov     dword ptr [edi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        pop     edi
        pop     esi
        ret     0x4
    }
}

/*
 * FUN_005d9ec0 (98 B) — __thiscall (ECX = this), RET 4. Recursively
 * destroys up to 4 child pointers ([this+0..0xC]), zeroes the fields,
 * and optionally frees `this` via FUN_004084e0 when the low bit of the
 * stack param is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005d9ec0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      L1
        push    1
        call    FUN_005d9ec0
    L1:
        mov     ecx, dword ptr [esi + 4]
        cmp     ecx, edi
        jz      L2
        push    1
        call    FUN_005d9ec0
    L2:
        mov     ecx, dword ptr [esi + 8]
        cmp     ecx, edi
        jz      L3
        push    1
        call    FUN_005d9ec0
    L3:
        mov     ecx, dword ptr [esi + 0xC]
        cmp     ecx, edi
        jz      L4
        push    1
        call    FUN_005d9ec0
    L4:
        test    byte ptr [esp + 0xC], 1
        mov     dword ptr [esi + 0xC], edi
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 4], edi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x24], edi
        jz      L5
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L5:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}

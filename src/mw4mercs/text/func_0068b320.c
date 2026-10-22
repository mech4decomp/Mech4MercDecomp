/*
 * FUN_0068b320 (95 B) — __thiscall.
 *
 * Reverses a run of 12-byte records between [this+0x34] and [this+0x38]
 * (float + 2 dwords each), swapping via FPU. Wraps FUN_006f4950 /
 * FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_007f244c;   /* [0x007f244c] */
extern void __cdecl FUN_006f4950(void *ptr);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0068b320(void)
{
    __asm {
        mov     eax, dword ptr [g_007f244c]
        sub     esp, 0xc
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esi + 0x38]
        mov     ecx, dword ptr [esi + 0x34]
        cmp     ecx, eax
        pop     esi
        jnc     L_done
    L_loop:
        mov     edx, dword ptr [ecx + 0x4]
        fld     dword ptr [ecx]
        mov     dword ptr [esp + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        sub     eax, 0xc
        mov     dword ptr [esp + 0x8], edx
        mov     edx, dword ptr [eax]
        fstp    dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x8]
        add     ecx, 0xc
        cmp     ecx, eax
        mov     dword ptr [eax + 0x8], edx
        jc      L_loop
    L_done:
        call    FUN_006f49a0
        add     esp, 0xc
        ret
    }
}

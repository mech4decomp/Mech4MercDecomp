/*
 * FUN_00662550 (203 B) — Virtual-method dispatch helper that calls a
 * vtable method (offset 0x90 or 0x50) on `this`, converts the returned
 * int to float, and compares it against a float produced by
 * FUN_00637b40/FUN_00637a20. Returns 1 if all four comparisons pass,
 * else 0.
 *
 * __stdcall (this passed as first stack arg), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);

__declspec(naked) char __stdcall FUN_00662550(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x90]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x6e
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_end
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x90]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x6f
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_end
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x50]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x70
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_end
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x50]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x71
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_end
        mov     al, 0x1
        pop     esi
        ret     0x4
L_end:
        xor     al, al
        pop     esi
        ret     0x4
    }
}

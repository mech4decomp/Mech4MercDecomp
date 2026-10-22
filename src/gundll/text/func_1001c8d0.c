/*
 * FUN_1001c8d0 (73 B) — __stdcall, RET 0x4.
 * Calls FUN_1001c460; on success invokes two vtable methods (offsets 0x1c/0x20)
 * on the object at param_1+0xc.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c460(void);
extern unsigned int g_10075060;

__declspec(naked) void __stdcall FUN_1001c8d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_1001c460
        test    eax, eax
        jl      done
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esi + 0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b8c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x1c]
        test    eax, eax
        jl      done
        mov     eax, dword ptr [esi + 0xc]
        mov     edx, dword ptr [g_10075060]
        mov     ecx, dword ptr [eax]
        add     esi, 0x20
        push    esi
        push    0x10049b90
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
    done:
        pop     esi
        ret     0x4
    }
}

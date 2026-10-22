/*
 * FUN_00408cc0 (120 B) — __fastcall. Builds two sub-objects on the stack,
 * queries a count via FUN_00415cc0, then runs a loop calling FUN_00415a90
 * on each, and finally destructs the sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415920(int);
extern int __cdecl FUN_00415cc0(int);
extern void __cdecl FUN_00415a90(int);
extern void __cdecl FUN_00415980(int);

__declspec(naked) void FUN_00408cc0(void)
{
    __asm {
        sub     esp, 0x28
        push    esi
        mov     esi, ecx
        push    edi
        lea     eax, [esi + 0x10]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00415920
        add     esi, 0x20
        mov     edi, 0x76cda0
        push    esi
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0xc], edi
        call    FUN_00415920
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00415cc0
        mov     edi, eax
        mov     esi, 0x1
        cmp     edi, esi
        jle     after_loop
loop_body:
        lea     ecx, [esi - 0x1]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_00415a90
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_00415a90
        inc     esi
        cmp     esi, edi
        jl      loop_body
after_loop:
        lea     ecx, [esp + 0x1c]
        call    FUN_00415980
        lea     ecx, [esp + 0x8]
        call    FUN_00415980
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x28
        ret
    }
}

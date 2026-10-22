/*
 * FUN_005EBA90 (141 B) — __thiscall (ECX = this), RET 0x10 (4 params).
 * Constructor: calls FUN_004d9940 with 4 args, sets vtable
 * 0x789a7c, builds a local object (FUN_00416bc0 / FUN_00415cc0),
 * optionally tears it down, then calls FUN_00416a90 with a double
 * from FUN_00707e70(0). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004d9940(void);
extern void *__cdecl FUN_00416bc0(void);
extern int __cdecl FUN_00415cc0(void);
extern void *__cdecl FUN_00416c80(void);
extern void *__cdecl FUN_00416d40(void);
extern double __cdecl FUN_00707e70(int);
extern void *__cdecl FUN_00416a90(void);
extern void *__cdecl FUN_00416c60(void);

extern int DAT_007f258c;

__declspec(naked) void *__fastcall FUN_005eba90(void)
{
    __asm {
        sub     esp, 0x1c
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x24]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004d9940
        mov     ecx, dword ptr [DAT_007f258c]
        push    ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esi], 0x789a7c
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x789a3c
        call    FUN_00415cc0
        cmp     eax, 0x32
        jc      l_skip
        lea     ecx, [esp + 0xc]
        call    FUN_00416c80
        lea     ecx, [esp + 0xc]
        call    FUN_00416d40
    l_skip:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 4]
        mov     ecx, dword ptr [DAT_007f258c]
        lea     edx, [esp + 4]
        push    edx
        push    esi
        call    FUN_00416a90
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        mov     eax, esi
        pop     esi
        add     esp, 0x1c
        ret     0x10
    }
}

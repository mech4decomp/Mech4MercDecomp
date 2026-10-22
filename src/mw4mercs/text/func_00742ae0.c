/*
 * FUN_00742ae0 (182 B) — Zeroes a 32-byte local buffer, sets its first dword
 * to 0x20, calls FUN_00735790, then stores results of FUN_00742a70/90/ab0
 * into a run of globals at 0x008abd28..0x008abd48.
 *
 * __cdecl, no params, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_ptr_85a214;
extern int g_int_8abd48;
extern int g_int_8abd44;
extern int g_int_8abd40;
extern int g_int_8abd3c;
extern int g_int_8abd38;
extern int g_int_8abd34;
extern int g_int_8abd30;
extern int g_int_8abd2c;
extern int g_int_8abd28;

extern void __cdecl FUN_00735790(void *, void *);
extern int __cdecl FUN_00742a70(int);
extern int __cdecl FUN_00742a90(int);
extern int __cdecl FUN_00742ab0(int);

__declspec(naked) void __cdecl FUN_00742ae0(void)
{
    __asm {
        sub     esp, 0x20
        push    edi
        xor     eax, eax
        mov     ecx, 8
        lea     edi, [esp + 4]
        rep     stosd
        mov     ecx, dword ptr [g_ptr_85a214]
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0xC], 0x20
        call    FUN_00735790
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        call    FUN_00742a70
        mov     dword ptr [g_int_8abd48], eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_00742a90
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     dword ptr [g_int_8abd44], eax
        call    FUN_00742ab0
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     dword ptr [g_int_8abd40], eax
        call    FUN_00742a70
        mov     dword ptr [g_int_8abd3c], eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_00742a90
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     dword ptr [g_int_8abd38], eax
        call    FUN_00742ab0
        mov     edx, dword ptr [esp + 0x1C]
        push    edx
        mov     dword ptr [g_int_8abd34], eax
        call    FUN_00742a70
        mov     dword ptr [g_int_8abd30], eax
        mov     eax, dword ptr [esp + 0x1C]
        push    eax
        call    FUN_00742a90
        mov     ecx, dword ptr [esp + 0x1C]
        push    ecx
        mov     dword ptr [g_int_8abd2c], eax
        call    FUN_00742ab0
        mov     dword ptr [g_int_8abd28], eax
        pop     edi
        add     esp, 0x20
        ret
    }
}

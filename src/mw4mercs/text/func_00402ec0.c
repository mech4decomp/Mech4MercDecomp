/*
 * FUN_00402ec0 (204 B) - Shows a message box by copying title/message strings
 * into buffers and invoking the Mercs shell script, or falls back to a direct
 * call. __stdcall, 2 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006b45a0(void);
extern void __cdecl FUN_006bbc00(void);
extern void __cdecl FUN_006b47b0(void);
extern void __cdecl FUN_006e4210(void);

extern char *g_76b320;   /* strncpy IAT */
extern char g_7ddd21;

__declspec(naked) void FUN_00402ec0(void)
{
    __asm {
        mov     al, byte ptr [g_7ddd21]
        sub     esp, 8
        test    al, al
        jnz     L_402f74
        push    esi
        push    0
        push    0x400
        call    FUN_006f3c80
        push    0
        push    0x400
        mov     dword ptr [esp + 0xc], eax
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 4]
        mov     esi, dword ptr [g_76b320]
        mov     dword ptr [esp + 8], eax
        mov     eax, dword ptr [esp + 0x10]
        push    0x400
        push    eax
        push    ecx
        call    esi
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        push    0x400
        push    edx
        push    eax
        call    esi
        add     esp, 0x18
        push    0
        push    0
        push    2
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x76ba48
        call    FUN_006b45a0
        push    0
        push    0
        push    2
        lea     edx, [esp + 0x14]
        push    edx
        push    0x76ba34
        call    FUN_006b45a0
        push    0
        push    0x2000
        push    0x76ba08
        call    FUN_006bbc00
        push    0
        push    0x76ba48
        call    FUN_006b47b0
        push    0
        push    0x76ba34
        call    FUN_006b47b0
        pop     esi
        add     esp, 8
        ret
L_402f74:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        push    0
        push    eax
        push    ecx
        call    FUN_006e4210
        add     esp, 0xc
        add     esp, 8
        ret
    }
}

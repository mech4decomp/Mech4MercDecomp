/*
 * FUN_10001006 (217 B, __stdcall) — DLL entry dispatcher (reason code in
 * param_2). Initializes version/command-line globals and calls the loader
 * init/shutdown helpers.
 *
 * Match: target 100%
 */

extern unsigned long (__stdcall *g_GetVersion)(void);
extern char *(__stdcall *g_GetCommandLineA)(void);

extern int g_10005378;
extern unsigned char g_10005379;
extern int g_10005380;
extern int g_10005384;
extern int g_1000537c;
extern int g_100058d8;
extern int g_10005364;
extern int g_10005360;
extern int g_100053b0;

extern int __cdecl FUN_10001a3a(int);
extern int __stdcall FUN_100012cd(void);
extern void __stdcall FUN_10001a76(void);
extern int __stdcall FUN_10001908(void);
extern void __stdcall FUN_100013f2(void);
extern void __stdcall FUN_100016bb(void);
extern void __stdcall FUN_10001602(void);
extern void __stdcall FUN_100011af(void);
extern void __stdcall FUN_100011ed(void);
extern void __stdcall FUN_100015ae(void);
extern void __stdcall FUN_10001321(void);
extern void __cdecl FUN_10001352(void *);

__declspec(naked) int __stdcall FUN_10001006(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x1
        jnz     label_1000109b
        call    dword ptr [g_GetVersion]
        push    1
        mov     dword ptr [g_10005378], eax
        call    FUN_10001a3a
        test    eax, eax
        pop     ecx
        jz      label_10001066
        mov     eax, dword ptr [g_10005378]
        xor     ecx, ecx
        mov     cl, byte ptr [g_10005379]
        and     eax, 0xff
        shr     dword ptr [g_10005378], 0x10
        mov     dword ptr [g_10005380], eax
        mov     dword ptr [g_10005384], ecx
        shl     eax, 0x8
        add     eax, ecx
        mov     dword ptr [g_1000537c], eax
        call    FUN_100012cd
        test    eax, eax
        jnz     label_1000106a
        call    FUN_10001a76
label_10001066:
        xor     eax, eax
        jmp     label_100010dc
label_1000106a:
        call    dword ptr [g_GetCommandLineA]
        mov     dword ptr [g_100058d8], eax
        call    FUN_10001908
        mov     dword ptr [g_10005364], eax
        call    FUN_100013f2
        call    FUN_100016bb
        call    FUN_10001602
        call    FUN_100011af
        inc     dword ptr [g_10005360]
        jmp     label_100010d9
label_1000109b:
        xor     ecx, ecx
        cmp     eax, ecx
        jnz     label_100010cd
        cmp     dword ptr [g_10005360], ecx
        jle     label_10001066
        dec     dword ptr [g_10005360]
        cmp     dword ptr [g_100053b0], ecx
        jnz     label_100010bc
        call    FUN_100011ed
label_100010bc:
        call    FUN_100015ae
        call    FUN_10001321
        call    FUN_10001a76
        jmp     label_100010d9
label_100010cd:
        cmp     eax, 0x3
        jnz     label_100010d9
        push    ecx
        call    FUN_10001352
        pop     ecx
label_100010d9:
        push    1
        pop     eax
label_100010dc:
        ret     0xC
    }
}

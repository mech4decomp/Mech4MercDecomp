/* func_0070e250 - FUN_0070e250 - 200 bytes: app-init/shutdown state machine */

extern int g_85b218;
extern int g_85b480;
extern int g_85b220;
extern int g_85b210;
extern int g_8aaeb8;
extern int g_85b4a8;
extern int g_8aaec0;
extern int g_858b84;
extern int g_858b80;
extern int g_85b214;
extern int g_8aaef4;
extern int g_8aae10;
extern int g_8aaeb4;
extern int g_8aae0c;
extern int g_7b73d8;

extern void __cdecl FUN_0073a250(void);
extern void __cdecl FUN_00733570(void);
extern void __cdecl FUN_0073a670(void);
extern void __cdecl FUN_007349a0(void);

__declspec(naked) void func_0070e250(void)
{
    __asm {
        mov eax, dword ptr [g_85b218]
        test eax, eax
        jz L_e2f2
        mov ecx, dword ptr [g_85b480]
        mov edx, dword ptr [g_85b220]
        dec ecx
        cmp ecx, edx
        jnz L_e29f
        mov edx, dword ptr [g_85b210]
        mov eax, 0x1
        mov dword ptr [g_8aaeb8], edx
        mov dword ptr [g_85b4a8], eax
        mov dword ptr [g_8aaec0], eax
        call FUN_0073a250
        call FUN_00733570
        mov dword ptr [g_85b218], 0x0
        jmp L_e2f2
    L_e29f:
        cmp eax, -0x1
        jz L_e2aa
        dec eax
        mov dword ptr [g_85b218], eax
    L_e2aa:
        test eax, eax
        jz L_e2d3
        mov eax, dword ptr [g_858b84]
        mov ecx, dword ptr [g_858b80]
        push eax
        push ecx
        call FUN_0073a670
        mov edx, dword ptr [g_858b84]
        mov eax, dword ptr [g_858b80]
        push edx
        push eax
        call FUN_007349a0
        ret
    L_e2d3:
        mov eax, dword ptr [g_85b214]
        test eax, eax
        mov ecx, dword ptr [g_85b210]
        mov dword ptr [g_8aaec0], eax
        mov dword ptr [g_8aaeb8], ecx
        jz L_e2f2
        call FUN_0073a250
    L_e2f2:
        mov eax, dword ptr [g_8aaef4]
        test eax, eax
        jz L_e317
        mov edx, dword ptr [g_8aae10]
        dec eax
        mov dword ptr [g_8aaef4], eax
        mov eax, dword ptr [g_8aae0c]
        mov dword ptr [g_8aaeb4], edx
        mov dword ptr [g_7b73d8], eax
    L_e317:
        ret
    }
}

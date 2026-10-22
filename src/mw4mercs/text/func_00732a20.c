/*
 * FUN_00732a20 (207 B) — GDI/DC management. __stdcall RET 0xC (3 params).
 *
 * Saves several globals, sets up a DC, calls FUN_00732870 / FUN_007326b0,
 * SelectObject / DeleteObject, then restores the saved globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008816e6;
extern int g_008816d8;
extern int g_008a9978;
extern char g_008816e5;
extern int g_008a9974;
extern int g_008a997c;
extern int g_00858c00;
extern int g_008816d0;
extern void *g_0076b068;   /* SelectObject (IAT) */
extern void *g_0076b074;   /* DeleteObject (IAT) */
extern void __stdcall FUN_00732870(int a);
extern void __stdcall FUN_007326b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_00732a20(void)
{
    __asm {
        sub     esp, 0xc
        mov     al, byte ptr [g_008816e6]
        mov     ecx, dword ptr [g_008816d8]
        mov     edx, dword ptr [g_008a9978]
        push    ebx
        mov     bl, byte ptr [g_008816e5]
        push    ebp
        mov     ebp, dword ptr [g_008a9974]
        push    esi
        mov     esi, dword ptr [g_008a997c]
        mov     byte ptr [esp + 0xf], al
        mov     eax, dword ptr [g_00858c00]
        push    edi
        mov     edi, dword ptr [g_008816d0]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [g_008a997c], eax
        xor     eax, eax
        push    ecx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [g_008a9978], eax
        mov     dword ptr [g_008a9974], eax
        call    FUN_00732870
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        push    ecx
        call    FUN_007326b0
        mov     edx, dword ptr [g_008a9978]
        mov     eax, dword ptr [g_008a997c]
        push    edx
        push    eax
        call    dword ptr [g_0076b068]
        mov     ecx, dword ptr [g_008a9974]
        push    ecx
        mov     dword ptr [g_008a997c], esi
        call    dword ptr [g_0076b074]
        mov     edx, dword ptr [esp + 0x14]
        mov     al, byte ptr [esp + 0x13]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [g_008816d0], edi
        pop     edi
        pop     esi
        mov     dword ptr [g_008a9974], ebp
        pop     ebp
        mov     byte ptr [g_008816e5], bl
        mov     dword ptr [g_008a9978], edx
        mov     byte ptr [g_008816e6], al
        mov     dword ptr [g_008816d8], ecx
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}

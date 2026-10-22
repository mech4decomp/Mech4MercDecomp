/*
 * FUN_00732b60 (212 B) — GDI object save/restore around two helper calls.
 *
 * Saves a set of globals, calls FUN_007330e0 / FUN_007326b0, does
 * SelectObject/DeleteObject, then restores all saved globals.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8816e6;
extern int g_8816d8;
extern int g_8a9978;
extern char g_8816e5;
extern int g_8a9974;
extern int g_8a997c;
extern int g_8816d0;
extern int g_858c00;
extern void *g_76b068;   /* IAT: SelectObject */
extern void *g_76b074;   /* IAT: DeleteObject */

extern void __cdecl FUN_007330e0(void);
extern void __cdecl FUN_007326b0(void);

__declspec(naked) void __stdcall FUN_00732b60(void)
{
    __asm {
        sub     esp, 0xc
        mov     al, byte ptr [g_8816e6]
        mov     ecx, dword ptr [g_8816d8]
        mov     edx, dword ptr [g_8a9978]
        push    ebx
        mov     bl, byte ptr [g_8816e5]
        push    ebp
        mov     ebp, dword ptr [g_8a9974]
        push    esi
        mov     esi, dword ptr [g_8a997c]
        push    edi
        mov     edi, dword ptr [g_8816d0]
        mov     byte ptr [esp + 0x13], al
        mov     eax, dword ptr [g_858c00]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [g_8a997c], eax
        xor     eax, eax
        push    ecx
        push    edx
        mov     dword ptr [g_8a9978], eax
        mov     dword ptr [g_8a9974], eax
        call    FUN_007330e0
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        push    edx
        call    FUN_007326b0
        mov     eax, dword ptr [g_8a9978]
        mov     ecx, dword ptr [g_8a997c]
        push    eax
        push    ecx
        call    dword ptr [g_76b068]
        mov     edx, dword ptr [g_8a9974]
        push    edx
        mov     dword ptr [g_8a997c], esi
        call    dword ptr [g_76b074]
        mov     eax, dword ptr [esp + 0x14]
        mov     cl, byte ptr [esp + 0x13]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [g_8816d0], edi
        pop     edi
        pop     esi
        mov     dword ptr [g_8a9974], ebp
        pop     ebp
        mov     byte ptr [g_8816e5], bl
        mov     dword ptr [g_8a9978], eax
        mov     byte ptr [g_8816e6], cl
        mov     dword ptr [g_8816d8], edx
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}

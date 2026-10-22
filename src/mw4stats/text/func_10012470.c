/*
 * FUN_10012470 (254 B, __fastcall, ECX = this) - Destructor body with SEH
 * frame. Closes handles, frees buffers, tears down the critical section at
 * (this+0x6c), closes the internet handle at (this+0x58), and runs the base
 * destructor FUN_1001b8d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002102c;    /* IAT: CloseHandle */
extern void *g_100210ec;    /* IAT: free */
extern void *g_10021188;    /* IAT: InternetCloseHandle */
extern void __cdecl FUN_10011f60(void);
extern void __cdecl FUN_1001b8d0(void);

__declspec(naked) void __cdecl FUN_10012470(void)
{
    __asm {
        push    -0x1
        push    0x1001fdbf
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x10021580
        mov     eax, dword ptr [esi + 0x98]
        mov     edi, dword ptr [g_1002102c]   /* CloseHandle */
        xor     ebx, ebx
        mov     dword ptr [esp + 0x18], 0x1
        cmp     eax, ebx
        jz      L_124B8
        push    eax
        call    edi
        mov     dword ptr [esi + 0x98], ebx
    L_124B8:
        mov     eax, dword ptr [esi + 0x9c]
        cmp     eax, ebx
        jz      L_124CB
        push    eax
        call    edi
        mov     dword ptr [esi + 0x9c], ebx
    L_124CB:
        mov     eax, dword ptr [esi + 0x174]
        mov     edi, dword ptr [g_100210ec]   /* free */
        cmp     eax, ebx
        jbe     L_124EB
        mov     eax, dword ptr [esi + 0x168]
        cmp     eax, ebx
        jz      L_124EB
        push    eax
        call    edi
        add     esp, 0x4
    L_124EB:
        mov     dword ptr [esi + 0x168], ebx
        mov     dword ptr [esi + 0x178], ebx
        mov     dword ptr [esi + 0x174], ebx
        mov     eax, dword ptr [esi + 0xdc]
        cmp     eax, ebx
        jbe     L_12517
        mov     eax, dword ptr [esi + 0xd0]
        cmp     eax, ebx
        jz      L_12517
        push    eax
        call    edi
        add     esp, 0x4
    L_12517:
        lea     ecx, [esi + 0x6c]
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xe0], ebx
        mov     dword ptr [esi + 0xdc], ebx
        call    FUN_10011f60
        cmp     esi, ebx
        jz      L_1253A
        lea     edi, [esi + 0x18]
        jmp     L_1253C
    L_1253A:
        xor     edi, edi
    L_1253C:
        mov     eax, dword ptr [edi + 0x40]
        cmp     eax, ebx
        jz      L_1254D
        push    eax
        call    dword ptr [g_10021188]      /* InternetCloseHandle */
        mov     dword ptr [edi + 0x40], ebx
    L_1254D:
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0xffffffff
        call    FUN_1001b8d0
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

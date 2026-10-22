/*
 * FUN_1001c420 (183 B) - __thiscall (1 arg, RET 0x4). InternetReadFileExA
 * wrapper: if *this != 0 read with context this+0x30, wait via FUN_1001c040,
 * and retry while GetLastError()==0x3e5; else plain InternetReadFile.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021178;   /* IAT: InternetReadFileExA */
extern void *g_10021174;   /* IAT: InternetReadFile */
extern void *g_100210a0;   /* IAT: ResetEvent */
extern void *g_10021028;   /* IAT: WaitForSingleObject */
extern void *g_10021098;   /* IAT: GetLastError */
extern void __cdecl FUN_1001c040(void);

__declspec(naked) void __cdecl FUN_1001c420(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        cmp     dword ptr [esi], 0x0
        jz      L_c4b2
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0x40]
        lea     edi, [esi + 0x30]
        mov     dword ptr [esi + 0x34], 0x5
        push    edi
        push    0x1
        push    ecx
        push    eax
        call    dword ptr [g_10021178]
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_c453
        mov     byte ptr [edi], 0x1
L_c453:
        lea     edx, [esp + 0x10]
        mov     ecx, esi
        push    edx
        push    0x0
        call    FUN_1001c040
        test    al, al
        jnz     L_c46d
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     4
L_c46d:
        test    ebx, ebx
        jnz     L_c4a7
        mov     edi, dword ptr [g_100210a0]
        mov     ebx, dword ptr [g_10021028]
        push    ebp
        mov     ebp, dword ptr [g_10021098]
L_c484:
        cmp     dword ptr [esi + 0x38], 0x64
        jz      L_c4a6
        call    ebp
        cmp     eax, 0x3e5
        jnz     L_c4a6
        mov     eax, dword ptr [esi + 0x3c]
        push    eax
        call    edi
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x1f4
        push    ecx
        call    ebx
        jmp     L_c484
L_c4a6:
        pop     ebp
L_c4a7:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     4
L_c4b2:
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esi + 0x40]
        mov     edx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [edi + 0x14]
        lea     ebx, [edi + 0x1c]
        push    ebx
        push    edx
        push    eax
        push    esi
        call    dword ptr [g_10021174]
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [edi + 0x18], ecx
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}

/*
 * FUN_1003efcc (318 B) — __cdecl. SEH-guarded string-type detection helper.
 * CFLAGS: /O1
 */

extern unsigned int g_100756b4;
extern unsigned int g_1007567c;
extern unsigned int g_1007568c;
extern void __cdecl FUN_10037940(void);
extern void __cdecl FUN_10040680(void);
extern int (__stdcall *g_10049164)(void);   /* GetStringTypeW IAT */
extern int (__stdcall *g_10049160)(void);   /* GetStringTypeA IAT */
extern int (__stdcall *g_10049100)(void);   /* MultiByteToWideChar IAT */

__declspec(naked) void FUN_1003efcc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x1004b828
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_100756b4]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L03b
        lea     eax, [ebp - 0x1c]
        push    eax
        push    0x1
        pop     esi
        push    esi
        push    0x1004b71c
        push    esi
        call    dword ptr [g_10049164]
        test    eax, eax
        jz      L019
        mov     eax, esi
        jmp     L036
    L019:
        lea     eax, [ebp - 0x1c]
        push    eax
        push    esi
        push    0x1004b718
        push    esi
        push    ebx
        call    dword ptr [g_10049160]
        test    eax, eax
        jz      L101
        push    0x2
        pop     eax
    L036:
        mov     dword ptr [g_100756b4], eax
    L03b:
        cmp     eax, 0x2
        jnz     L064
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, ebx
        jnz     L04c
        mov     eax, dword ptr [g_1007567c]
    L04c:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        push    eax
        call    dword ptr [g_10049160]
        jmp     L103
    L064:
        cmp     eax, 0x1
        jnz     L101
        cmp     dword ptr [ebp + 0x18], ebx
        jnz     L07a
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp + 0x18], eax
    L07a:
        push    ebx
        push    ebx
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x20]
        neg     eax
        sbb     eax, eax
        and     eax, 0x8
        inc     eax
        push    eax
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_10049100]
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, ebx
        jz      L101
        mov     dword ptr [ebp - 0x4], ebx
        lea     edi, [eax + eax*0x1]
        mov     eax, edi
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     esi, esp
        mov     dword ptr [ebp - 0x24], esi
        push    edi
        push    ebx
        push    esi
        call    FUN_10040680
        add     esp, 0xc
        jmp     L0d0
        /* SEH handler bytes (skipped by the JMP above, present in stream) */
        push    0x1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        xor     esi, esi
    L0d0:
        or      dword ptr [ebp - 0x4], 0xffffffff
        cmp     esi, ebx
        jz      L101
        push    dword ptr [ebp - 0x20]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    0x1
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_10049100]
        cmp     eax, ebx
        jz      L101
        push    dword ptr [ebp + 0x14]
        push    eax
        push    esi
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049164]
        jmp     L103
    L101:
        xor     eax, eax
    L103:
        lea     esp, [ebp - 0x34]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0x0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}

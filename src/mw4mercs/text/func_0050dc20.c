/*
 * func_0050DC20 - 104 bytes
 * Array allocation and initialization
 */
extern int *g_76b294;                 // IAT/global function pointer @ 0x0076B294
extern void __cdecl FUN_0050d5d0(void);

__declspec(naked) void func_0050DC20()
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [g_76b294]
        push    edi
        push    0x14
        call    esi
        mov     ebx, [esp + 0x18]
        mov     edi, eax
        lea     eax, [ebx * 4]
        push    eax
        call    esi
        add     esp, 8
        test    ebx, ebx
        mov     [edi], eax
        jle     loop_done
        push    ebp
        mov     ebp, [esp + 0x14]
        mov     esi, eax
loop_start:
        mov     ecx, [esp + 0x24]
        push    ecx
        push    0
        push    ebp
        call    FUN_0050d5d0
        mov     [esi], eax
        add     esp, 0x0C
        add     esi, 4
        dec     ebx
        jne     loop_start
        mov     ebx, [esp + 0x18]
        pop     ebp
loop_done:
        mov     eax, [esp + 0x1C]
        mov     edx, [esp + 0x20]
        mov     ecx, [esp + 0x18]
        mov     [edi + 0x10], eax
        mov     [edi + 4], ebx
        mov     [edi + 8], edx
        mov     [edi + 0x0C], ecx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}

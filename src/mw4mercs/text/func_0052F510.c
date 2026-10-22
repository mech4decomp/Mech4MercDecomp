/*
 * FUN_0052f510 (159 B) — Global cleanup function.
 * Frees several global pointers at 0x007ddd30, 0x007ddd08,
 * 0x007ddd0c, 0x007ddd14, 0x007ddd10, 0x007ddd18.
 * Calls FUN_004D5D20 on the first one before freeing.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D5D20(void *);
extern void __cdecl FUN_004084E0(void *);

/* Global data references */
extern int *DAT_007ddd30;
extern int *DAT_007ddd08;
extern int *DAT_007ddd0c;
extern int *DAT_007ddd14;
extern int *DAT_007ddd10;
extern int *DAT_007ddd18;

__declspec(naked) void FUN_0052f510(void)
{
    
__asm {
push    esi
        mov     esi, dword ptr [DAT_007ddd30]        ; mov esi, [0x007ddd30]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      skip_0

        mov     ecx, esi
        call    FUN_004D5D20
        push    esi
        call    FUN_004084E0
        add     esp, 4

skip_0:
        mov     eax, dword ptr [DAT_007ddd08]        ; mov eax, [0x007ddd08]
        cmp     eax, edi
        mov     dword ptr [DAT_007ddd30], edi        ; mov [0x007ddd30], edi
        jz      skip_1
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [DAT_007ddd08], edi        ; mov [0x007ddd08], edi

skip_1:
        mov     eax, dword ptr [DAT_007ddd0c]        ; mov eax, [0x007ddd0c]
        cmp     eax, edi
        jz      skip_2
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [DAT_007ddd0c], edi        ; mov [0x007ddd0c], edi

skip_2:
        mov     eax, dword ptr [DAT_007ddd14]        ; mov eax, [0x007ddd14]
        cmp     eax, edi
        jz      skip_3
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [DAT_007ddd14], edi        ; mov [0x007ddd14], edi

skip_3:
        mov     eax, dword ptr [DAT_007ddd10]        ; mov eax, [0x007ddd10]
        cmp     eax, edi
        jz      skip_4
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [DAT_007ddd10], edi        ; mov [0x007ddd10], edi

skip_4:
        mov     eax, dword ptr [DAT_007ddd18]        ; mov eax, [0x007ddd18]
        cmp     eax, edi
        jz      skip_5
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [DAT_007ddd18], edi        ; mov [0x007ddd18], edi

skip_5:
        pop     edi
        pop     esi
        ret
    }


}

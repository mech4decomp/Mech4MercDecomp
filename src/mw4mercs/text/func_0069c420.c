/*
 * FUN_0069c420 (249 B) — __cdecl, 4 params, RET (no stack cleanup).
 *
 * Iterates a linked list, calls several helpers, and walks a chain
 * writing DAT_00805914 into each node's +4 slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069c190(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649150(void);
extern char __cdecl FUN_006498f0(void *arg);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_0069ae70(void);
extern void __cdecl FUN_0069c6b0(void);

extern int DAT_008058ac;
extern int DAT_00805914;

__declspec(naked) void __cdecl FUN_0069c420(int *param_1, int *param_2, int param_3, int param_4)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebp]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax

    loop_0069c43b:
        push    ebx
        push    ebp
        push    esi
        call    FUN_0069c190
        add     esp, 0xc
        cmp     edi, eax
        jz      label_0069c454
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4

    label_0069c454:
        call    FUN_00649150
        cmp     dword ptr [DAT_008058ac], 0x11
        jnz     label_0069c482
        call    FUN_00649150
        push    0x7b6008
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     loop_0069c43b
        push    0x3b
        call    FUN_00562f40
        add     esp, 0x4

    label_0069c482:
        push    0x0
        push    0x7b5890
        push    0x7b5ffc
        call    FUN_00649920
        push    0x18
        push    0xd
        call    FUN_0069ae70
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x14
        test    eax, eax
        jnz     label_0069c4ab
        mov     eax, dword ptr [esi]
        jmp     label_0069c4ae

    label_0069c4ab:
        mov     eax, dword ptr [eax + 0x8]

    label_0069c4ae:
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      label_0069c4c6
        mov     ecx, dword ptr [DAT_00805914]

    label_0069c4bc:
        mov     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [eax + 0x8]
        test    eax, eax
        jnz     label_0069c4bc

    label_0069c4c6:
        cmp     dword ptr [DAT_008058ac], 0x2c
        jz      label_0069c503

    label_0069c4cf:
        call    FUN_0069c6b0
        mov     eax, dword ptr [DAT_008058ac]
        cmp     eax, 0xe
        jnz     label_0069c4ed

    label_0069c4de:
        call    FUN_00649150
        mov     eax, dword ptr [DAT_008058ac]
        cmp     eax, 0xe
        jz      label_0069c4de

    label_0069c4ed:
        cmp     eax, 0x2c
        jz      label_0069c503
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     label_0069c4cf

    label_0069c503:
        push    0x39
        push    0x2c
        call    FUN_0069ae70
        push    0x14
        push    0xe
        call    FUN_0069ae70
        add     esp, 0x10
        ret
    }
}

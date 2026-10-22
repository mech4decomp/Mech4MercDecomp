/*
 * FUN_00501A20 (279 B) — class constructor (__thiscall, ret 0x34)
 * Initializes an object with 13 DWORD parameters, sets up sub-objects
 * at offsets +0x44 and +0x74.
 *
 * CFLAGS: /O1
 */
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_005015f0(void);
extern void __cdecl FUN_00500e00(void);
extern void __cdecl FUN_00501640(void);
extern void __cdecl FUN_00500e50(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void func_00501a20(void)
{
    __asm {
        mov     eax, [esp+0x14]
        mov     edx, [esp+0x08]
        push    ebx
        mov     ebx, [esp+0x10]
        push    ebp
        mov     ebp, [esp+0x0C]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        mov     ecx, [esp+0x24]
        push    ecx
        push    ebx
        push    edx
        push    ebp
        mov     ecx, esi
        call    FUN_004d5c10
        mov     ecx, [esp+0x2C]
        mov     eax, [esp+0x28]
        mov     edx, [esp+0x30]
        mov     [esi+0x24], ecx
        mov     ecx, [esp+0x38]
        mov     [esi+0x20], eax
        mov     eax, [esp+0x34]
        mov     [esi+0x30], ecx
        mov     ecx, [esp+0x44]
        mov     [esi+0x28], edx
        mov     edx, [esp+0x3C]
        mov     [esi+0x2C], eax
        mov     eax, [esp+0x40]
        mov     [esi+0x3C], ecx
        lea     edi, [esi+0x44]
        mov     ecx, edi
        mov     [esi+0x34], edx
        mov     [esi+0x38], eax
        mov     dword ptr [esi+0x40], 0x00000000
        call    FUN_005015f0
        lea     ecx, [esi+0x74]
        call    FUN_00500e00
        cmp     ebp, 0x000001C9
        je      alloc_path

        lea     edx, [ebx+0x44]
        push    edx
        mov     ecx, edi
        call    FUN_00501640
        add     ebx, 0x74
        push    ebx
        lea     ecx, [esi+0x74]
        call    FUN_00500e50
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x0034

    alloc_path:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        je      alloc_fail_1

        push    0x00
        push    0x00000570
        push    0x00776408
        push    0x00
        mov     ecx, eax
        call    FUN_005013f0
        jmp     after_alloc_1

    alloc_fail_1:
        xor     eax, eax

    after_alloc_1:
        push    eax
        mov     ecx, edi
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        je      alloc_fail_2

        push    -1
        push    0x00000570
        push    0x00776408
        push    0x00
        mov     ecx, eax
        call    FUN_005008e0
        push    eax
        lea     ecx, [esi+0x74]
        call    FUN_00500ec0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x0034

    alloc_fail_2:
        xor     eax, eax
        push    eax
        lea     ecx, [esi+0x74]
        call    FUN_00500ec0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x0034
    }
}

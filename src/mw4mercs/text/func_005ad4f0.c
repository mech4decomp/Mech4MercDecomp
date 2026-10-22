/*
 * FUN_005AD4F0 (900 B) — __thiscall (ECX = this), RET 0x10 (4 dword params).
 * Constructor that initializes a large object with many sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D9940(void);
extern void __cdecl FUN_00551870(void *param);
extern void __cdecl FUN_005AEEB0(void);

__declspec(naked) void __stdcall FUN_005AD4F0(void)
{
    

extern int DAT_007b8d90;
extern int DAT_007b8d88;
extern int DAT_007b8d8c;
__asm {
sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004D9940
        xor     ebx, ebx
        mov     byte ptr [esi + 0x190], 0x1
        mov     dword ptr [esi + 0x194], ebx
        mov     dword ptr [esi + 0x198], ebx
        mov     byte ptr [esi + 0x1c0], 0x1
        mov     dword ptr [esi + 0x1c4], ebx
        mov     dword ptr [esi + 0x1c8], ebx
        mov     byte ptr [esi + 0x200], 0x1
        lea     edi, [esi + 0x190]
        mov     dword ptr [esi + 0x204], ebx
        mov     dword ptr [esi + 0x208], ebx
        mov     byte ptr [esi + 0x230], 0x1
        lea     ebp, [esi + 0x1c0]
        mov     dword ptr [esi + 0x234], ebx
        mov     dword ptr [esi + 0x238], ebx
        mov     byte ptr [esi + 0x260], 0x1
        mov     dword ptr [esi + 0x264], ebx
        mov     dword ptr [esi + 0x268], ebx
        mov     byte ptr [esi + 0x290], 0x1
        mov     dword ptr [esi + 0x294], ebx
        mov     dword ptr [esi + 0x298], ebx
        mov     byte ptr [esi + 0x2c4], 0x1
        push    ebx
        mov     dword ptr [esi + 0x2c8], ebx
        mov     dword ptr [esi + 0x2cc], ebx
        mov     byte ptr [esi + 0x2dc], 0x1
        sub     esp, 0xc
        mov     dword ptr [esi + 0x2e0], ebx
        mov     dword ptr [esi + 0x2e4], ebx
        mov     byte ptr [esi + 0x2f4], 0x1
        mov     dword ptr [esi + 0x2f8], ebx
        mov     dword ptr [esi + 0x2fc], ebx
        mov     byte ptr [esi + 0x310], 0x1
        mov     ecx, esp
        mov     dword ptr [esi + 0x314], ebx
        mov     dword ptr [esi + 0x318], ebx
        mov     byte ptr [esi + 0x328], 0x1
        push    0x7b8d88
        mov     dword ptr [esi + 0x32c], ebx
        mov     dword ptr [esi + 0x330], ebx
        mov     dword ptr [esi + 0x344], ebx
        mov     dword ptr [esi + 0x348], 0xfffffffe
        mov     dword ptr [esi], 0x785a08
        mov     dword ptr [esi + 0x168], ebx
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [esi + 0x170], ebx
        mov     dword ptr [esi + 0x174], ebx
        mov     dword ptr [esi + 0x178], ebx
        mov     dword ptr [esi + 0x17c], ebx
        mov     byte ptr [esi + 0x1f0], 0x1
        mov     byte ptr [esi + 0x1f1], 0x1
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        lea     ecx, [esi + 0x260]
        call    FUN_005AEEB0
        push    ebx
        sub     esp, 0xc
        mov     ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        lea     ecx, [esi + 0x290]
        call    FUN_005AEEB0
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x2c]
        add     eax, 0x20
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    ebx
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [eax + 0x2c]
        sub     esp, 0xc
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x2c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esi + 0x200]
        call    FUN_005AEEB0
        push    ebx
        sub     esp, 0xc
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x2c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esi + 0x230]
        call    FUN_005AEEB0
        push    ebx
        mov     dword ptr [esi + 0x2c8], ebx
        mov     dword ptr [esi + 0x2d0], ebx
        mov     dword ptr [esi + 0x2d4], ebx
        mov     dword ptr [esi + 0x2d8], ebx
        mov     dword ptr [esi + 0x2cc], ebx
        mov     byte ptr [esi + 0x2c4], 0x1
        sub     esp, 0xc
        mov     dword ptr [esi + 0x2e0], ebx
        mov     dword ptr [esi + 0x2e8], ebx
        mov     dword ptr [esi + 0x2ec], ebx
        mov     dword ptr [esi + 0x2f0], ebx
        mov     dword ptr [esi + 0x2e4], ebx
        mov     byte ptr [esi + 0x2dc], 0x1
        mov     dword ptr [esi + 0x2f8], ebx
        mov     dword ptr [esi + 0x300], ebx
        mov     dword ptr [esi + 0x304], ebx
        mov     dword ptr [esi + 0x308], ebx
        mov     dword ptr [esi + 0x2fc], ebx
        mov     byte ptr [esi + 0x2f4], 0x1
        mov     ecx, esp
        mov     dword ptr [esi + 0x314], ebx
        mov     dword ptr [esi + 0x31c], ebx
        mov     dword ptr [esi + 0x320], ebx
        mov     dword ptr [esi + 0x324], ebx
        mov     dword ptr [esi + 0x318], ebx
        mov     byte ptr [esi + 0x310], 0x1
        push    0x7b8d88
        mov     byte ptr [esi + 0x2c0], bl
        mov     byte ptr [esi + 0x2c1], bl
        mov     byte ptr [esi + 0x2c2], bl
        mov     dword ptr [esi + 0x32c], ebx
        mov     dword ptr [esi + 0x334], ebx
        mov     dword ptr [esi + 0x338], ebx
        mov     dword ptr [esi + 0x33c], ebx
        mov     dword ptr [esi + 0x330], ebx
        mov     byte ptr [esi + 0x328], 0x1
        mov     dword ptr [esi + 0x30c], ebx
        mov     dword ptr [esi + 0x180], ebx
        mov     dword ptr [esi + 0x184], ebx
        mov     dword ptr [esi + 0x188], ebx
        mov     dword ptr [esi + 0x18c], ebx
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        mov     ecx, edi
        call    FUN_005AEEB0
        push    ebx
        sub     esp, 0xc
        mov     ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        mov     ecx, ebp
        call    FUN_005AEEB0
        mov eax, dword ptr [DAT_007b8d90]
        mov ecx, dword ptr [DAT_007b8d88]
        mov edx, dword ptr [DAT_007b8d8c]
        mov     dword ptr [esi + 0x1fc], eax
        mov     eax, dword ptr [esi + 0x10]
        or      eax, 0x40
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        mov     byte ptr [esi + 0x340], bl
        mov     dword ptr [esi + 0x1f4], ecx
        mov     dword ptr [esi + 0x1f8], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }


}

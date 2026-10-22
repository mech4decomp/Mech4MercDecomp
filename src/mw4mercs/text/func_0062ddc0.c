/*
 * FUN_0062ddc0 (105 B) — builds a local buffer via FUN_0070e390, loops 15 times
 * (ESI 0..0x38 step 4) calling FUN_0070e3c0 with two absolute-array elements
 * (0x7b55f8 / 0x7f2ce0) plus a 4-byte value, then FUN_0070e460 and XOR-combines
 * four dwords into the return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070e390(void *a);
extern void __cdecl FUN_0070e3c0(void *a, int b, int c);
extern void __cdecl FUN_0070e460(void *a, void *b);

__declspec(naked) void FUN_0062ddc0(void)
{
    __asm {
        sub     esp, 0x68
        push    esi
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_0070e390
        xor     esi, esi
    loop_start:
        mov     ecx, dword ptr [esi + 0x7f2ce0]
        mov     edx, dword ptr [esi + 0x7b55f8]
        push    ecx
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_0070e3c0
        push    0x4
        lea     ecx, [esp + 0x74]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0070e3c0
        add     esi, 0x4
        cmp     esi, 0x3c
        jc      loop_start
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        call    FUN_0070e460
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, edx
        mov     edx, dword ptr [esp + 0x8]
        xor     edx, ecx
        pop     esi
        add     esp, 0x68
        ret
    }
}

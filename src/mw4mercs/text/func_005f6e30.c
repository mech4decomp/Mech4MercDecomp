/*
 * FUN_005f6e30 (170 B) — __thiscall constructor, RET 0x10.
 *
 * Calls base constructor FUN_004d9940, sets vtable 0x78a85c, initializes
 * fields, optionally calls a virtual method, then conditionally tears down
 * sub-objects via FUN_004fca80/FUN_004fd360/FUN_00412780.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004d9940(void);
extern void *__cdecl FUN_004fca80(void);
extern void *__cdecl FUN_004fd360(void);
extern void *__cdecl FUN_00412780(void);

extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __stdcall FUN_005f6e30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004d9940
        mov     ecx, dword ptr [esi + 0xE0]
        test    ecx, ecx
        mov     ebx, 1
        mov     dword ptr [esi], 0x78A85C
        mov     byte ptr [esi + 0x168], bl
        mov     dword ptr [esi + 0x178], 9
        jz      L1
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx]
L1:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xC]
        xor     ecx, 0x85739531
        cmp     dword ptr [ecx + 0x5C], ebx
        mov     dword ptr [esi + 0xE0], 0
        jz      L2
        mov     edx, dword ptr [esi + 0x2C]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        lea     ebx, [esi + 0x2C]
        xor     edi, 0x85739531
        push    edx
        mov     ecx, edi
        call    FUN_004fca80
        push    0
        push    eax
        mov     ecx, edi
        call    FUN_004fd360
        push    0
        mov     ecx, ebx
        call    FUN_00412780
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
L2:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}

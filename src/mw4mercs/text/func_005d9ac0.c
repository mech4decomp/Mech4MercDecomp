/*
 * FUN_005d9ac0 (142 B) — __thiscall, RET 0x30. Allocates a 0x2c-byte
 * object, initializes it via FUN_00551870 twice, calls FUN_005d9330,
 * then FUN_005d9cb0. Returns the object (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00551870(void);
extern void *__cdecl FUN_005d9330(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005d9cb0(void *);

__declspec(naked) void __cdecl FUN_005d9ac0(void)
{
    

extern int DAT_007f2464;
__asm {
        mov eax, dword ptr [DAT_007f2464]
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call    FUN_006f4950
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9b38
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        sub     esp, 0xc
        lea     edx, [esp + 0x3c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x3c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005d9330
        mov     esi, eax
        call    FUN_006f49a0
        push    esi
        mov     ecx, edi
        call    FUN_005d9cb0
        mov     eax, esi
        pop     edi
        pop     esi
        ret     0x30
L_9b38:
        xor     esi, esi
        call    FUN_006f49a0
        push    esi
        mov     ecx, edi
        call    FUN_005d9cb0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x30
    }


}

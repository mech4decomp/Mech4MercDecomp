/*
 * FUN_005d9be0 (130 B) — __thiscall, RET 0x28. Allocates a 0x2c-byte
 * object, passes 10 args to FUN_005d9470, then FUN_005d9cb0. Returns
 * the object (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int);
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_005d9470(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005d9cb0(void *);

__declspec(naked) void __cdecl FUN_005d9be0(void)
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
        add     esp, 0x4
        test    eax, eax
        jz      L_9c4c
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_005d9470
        mov     esi, eax
        call    FUN_006f49a0
        push    esi
        mov     ecx, edi
        call    FUN_005d9cb0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x28
L_9c4c:
        xor     esi, esi
        call    FUN_006f49a0
        push    esi
        mov     ecx, edi
        call    FUN_005d9cb0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x28
    }


}

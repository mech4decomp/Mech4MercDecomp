/*
 * FUN_005abdb0 (83 B) — __cdecl check function.
 *
 * Calls FUN_0061acf0(); if *result != 0xffff, calls FUN_0061acf0(0x80)
 * and returns FUN_0061ad20(). Otherwise performs an obfuscated global
 * lookup and returns 1/0 based on a flag and param_1->field_2c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_0061acf0(void);
extern int FUN_0061ad20(void);

__declspec(naked) int __cdecl FUN_005abdb0(void *param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
call    FUN_0061acf0
        cmp     dword ptr [eax], 0xffff
        jz      lookup
        push    0x80
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        ret
lookup:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        jz      ret0
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x2c]
        test    ecx, ecx
        jz      ret0
        mov     eax, 0x1
        ret
ret0:
        xor     eax, eax
        ret
    }


}

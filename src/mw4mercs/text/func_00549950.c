/*
 * MW4 Mercenaries decompilation
 * Function: func_00549950
 * VA: 0x00549950
 * Size: 91 bytes
 * Calling convention: __stdcall
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00630920(void);

__declspec(naked) void __stdcall func_00549950(void)
{
    __asm {
        fld     dword ptr [ecx+0x320]
        fcomp   dword ptr [esp+4]
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah, 0x41 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      skip_update
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, [eax]
        xor     edx, dword ptr [DAT_007dab40]
        lea     eax, [edx+0x40]
        mov     edx, [eax]
        xor     edx, 0x85739531
        je      skip_update
        mov     edx, [esp+4]
        mov     [ecx+0x320], edx
        mov     ecx, [eax]
        xor     ecx, 0x85739531
        mov     edx, [ecx+0x50]
        test    edx, edx
        je      skip_update
        mov     eax, [eax]
        mov     edx, [esp+4]
        xor     eax, 0x85739531
        mov     ecx, [eax+0x50]
        push    edx
        call    FUN_00630920
    skip_update:
        ret     4
    }
}

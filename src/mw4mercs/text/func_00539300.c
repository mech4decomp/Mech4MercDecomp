// FUN_00539300 (103 bytes)
#include <windows.h>

/* extern function symbols for call rel32 */
extern void __cdecl FUN_00559be0(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void func_00539300(void)
{
    __asm {
        push    ecx
        mov     al, byte ptr [ecx + 0x16]
        test    al, al
        jz      label_do_work
        mov     eax, dword ptr [ecx + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jnz     label_epilogue
label_do_work:
        mov     ecx, dword ptr [esp + 0x0c]
        mov     edx, dword ptr [ecx]
        push    1
        lea     eax, [esp + 0x04]
        push    eax
        mov     dword ptr [esp + 0x08], 0
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x18]
        xor     edx, 0x85739531
        jz      label_epilogue
        mov     ecx, dword ptr [eax + 0x2c]
        xor     ecx, 0x85739531
        jz      label_epilogue
        /* __emit: MSVC6 encodes mov edx,[esp] as 8B 14 24 (3 bytes) instead of 8B 54 24 00 (4 bytes) */
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        mov     ecx, dword ptr [eax + 0x2c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00559be0
label_epilogue:
        pop     ecx
        ret     8
    }
}

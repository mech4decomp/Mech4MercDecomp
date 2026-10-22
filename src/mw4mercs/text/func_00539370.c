/* FUN_00539370 - 296 bytes */
#include <windows.h>

/* extern function symbols for call rel32 */
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005e1e70(void);
extern void __cdecl FUN_00559b30(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f25c0;

__declspec(naked) void FUN_00539370(void)
{
    __asm {
        mov     al, [ecx + 0x16]
        sub     esp, 0x08
        test    al, al
        push    esi
        jz      label_do_work
        mov     eax, [ecx + 0x50]
        mov     ecx, [eax + 0x10]
        test    ecx, ecx
        jnz     label_epilogue
label_do_work:
        mov     esi, [esp + 0x14]
        mov     edx, [esi]
        push    1
        lea     eax, [esp + 0x08]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x0c], 0
        mov     dword ptr [esp + 0x10], 0
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x0c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, [ecx]
        xor     eax, edx
        mov     edx, [eax + 0x18]
        xor     edx, 0x85739531
        jz      label_epilogue
        mov     ecx, [eax + 0x2c]
        xor     ecx, 0x85739531
        jz      label_epilogue
        mov     edx, [eax + 0x18]
        xor     edx, 0x85739531
        mov     ecx, [edx + 0x170]
        test    ecx, ecx
        jz      label_epilogue
        mov     ecx, dword ptr [DAT_007f25c0]
        mov     eax, [eax + 0x18]
        push    ecx
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x170]
        mov     ecx, [ecx + 4]
        call    FUN_00415230
        cmp     al, 1
        jnz     label_epilogue
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x18]
        xor     ecx, 0x85739531
        mov     edx, [ecx + 0x170]
        mov     ecx, [edx + 0x4cc]
        cmp     ecx, [esp + 4]
        jnz     label_epilogue
        mov     edx, [esp + 8]
        mov     ecx, [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      label_epilogue
        mov     ecx, esi
        call    FUN_005e1e70
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, [ecx + 0x2c]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x2c]
        jz      label_epilogue
        mov     ecx, [eax]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00559b30
label_epilogue:
        pop     esi
        add     esp, 0x08
        ret     8
    }
}

/* FUN_00539210 - 230 bytes */
#include <windows.h>

/* extern function symbols for call rel32 */
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00559be0(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f25c0;

__declspec(naked) void FUN_00539210(void)
{
    __asm {
        mov     al, [ecx + 0x16]
        sub     esp, 0x08
        test    al, al
        jz      label_do_work
        mov     eax, [ecx + 0x50]
        mov     ecx, [eax + 0x10]
        test    ecx, ecx
        jnz     label_epilogue
label_do_work:
        push    esi
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
        push    1
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
        pop     esi
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
        /* __emit: MSVC6 encodes cmp ecx,[esp] as 3B 0C 24 (3 bytes) instead of 3B 4C 24 00 (4 bytes) */
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        jnz     label_epilogue
        mov     edx, [esp + 4]
        mov     ecx, [eax + 0x2c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00559be0
label_epilogue:
        add     esp, 0x08
        ret     8
    }
}

/* FUN_00577450 - ABL helper: convert object ID to pointer */
#ifdef _MSC_VER
#pragma warning(disable: 4731)  /* frame pointer register 'ebp' modified by inline assembly code */
#endif

#include <windows.h>

/* ABL runtime globals (absolute addresses) */
#define ADDR_DAT_007dde2c  0x007dde2c
#define ADDR_DAT_007dab44  0x007dab44
#define ADDR_DAT_007dab40  0x007dab40
#define ADDR_DAT_007f20d8  0x007f20d8

/* External functions */
extern int  __cdecl FUN_005666d0(const char *str);
extern int  __cdecl FUN_006fabf0(int param);
extern int  __cdecl FUN_004fcb30(int param);
extern char __cdecl FUN_00415230(int param);

__declspec(naked) int FUN_00577450(int param_1)
{
    

extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f20d8;
__asm {
push    ebp
        mov     ebp, esp

        mov al, byte ptr [DAT_007dde2c]

        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     esi, edi
        sar     esi, 0x18
        test    al, al
        jz      skip_assert1

        test    esi, esi
        jge     check_upper_bound
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_upper_bound
        int     3

check_upper_bound:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      skip_assert1
        cmp     esi, 0x12
        jl      skip_assert1
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert1
        int     3

skip_assert1:
        mov eax, dword ptr [DAT_007dab44]

        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      done

        test    esi, esi
        jnz     check_type_assert
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_type_assert
        int     3

check_type_assert:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      done

        mov eax, dword ptr [DAT_007f20d8]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     done
        push    0x781220
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      done
        int     3

done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}

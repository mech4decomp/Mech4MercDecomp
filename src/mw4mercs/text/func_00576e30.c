/* FUN_00576e30 - ABL opcode handler: group all within distance */
#ifdef _MSC_VER
#pragma warning(disable: 4731)  /* frame pointer register 'ebp' modified by inline assembly code */
#endif

#include <windows.h>

/* ABL runtime globals (absolute addresses) */
#define ADDR_DAT_00805918  0x00805918
#define ADDR_DAT_00805908  0x00805908
#define ADDR_DAT_0080592c  0x0080592c
#define ADDR_DAT_00805928  0x00805928
#define ADDR_DAT_0080d9b0  0x0080d9b0
#define ADDR_DAT_0080d964  0x0080d964
#define ADDR_DAT_007dde2c  0x007dde2c
#define ADDR_DAT_007dab44  0x007dab44
#define ADDR_DAT_007dab40  0x007dab40
#define ADDR_DAT_007dc690  0x007dc690

/* External ABL functions */
extern void __cdecl FUN_0064db40(void);
extern char __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_005666d0(const char *str);
extern int  __cdecl FUN_006fabf0(int param);
extern int  __cdecl FUN_00566c30(int param, void *buf, int flag);
extern void __cdecl FUN_00580540(void *param);
extern void __cdecl FUN_00566ef0(int param);
extern int  __cdecl FUN_004fcb30(int param);
extern char __cdecl FUN_00415230(int param);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) void FUN_00576e30(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_00805928;
extern int DAT_0080d964;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc690;
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x24

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi

        mov dword ptr [DAT_00805908], ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        mov eax, dword ptr [DAT_0080592c]

        mov     esi, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        inc     eax

        mov dword ptr [DAT_00805908], edx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        mov eax, dword ptr [DAT_0080592c]

        mov     ebx, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax

        mov dword ptr [DAT_00805908], ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        mov eax, dword ptr [DAT_0080592c]

        mov     edx, dword ptr [eax]
        sub     eax, 4
        mov     dword ptr [ebp - 0xc], edx

        mov dword ptr [DAT_0080592c], eax

        fild    dword ptr [ebp - 0xc]

        mov al, byte ptr [DAT_007dde2c]

        test    al, al

        fstp    dword ptr [ebp - 8]

        jz      skip_assert

        push    esi
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jz      skip_assert

        push    0x7811f8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
        push    esi
        call    FUN_00566c30
        mov     esi, eax
        add     esp, 4

        lea     eax, [ebp - 1]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_00580540

        push    0
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    esi
        call    FUN_00566ef0

        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, ecx
        sub     edx, eax
        add     esp, 0xc
        test    edx, 0xfffffffc
        jnz     has_objects

        /* Empty group */
        mov esi, dword ptr [DAT_0080592c]

        mov eax, dword ptr [DAT_00805928]

        add     esi, 4
        add     eax, 0xa000

        mov dword ptr [DAT_0080592c], esi

        cmp     esi, eax
        jmp     alloc_check_store0

has_objects:
        cmp     eax, ecx
        mov     edi, eax
        mov     dword ptr [ebp - 0xc], edi
        jz      found_all

outer_loop:
        push    ebx
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jnz     not_group_type

        /* Group type: iterate sub-group */
        lea     edx, [ebp - 1]
        push    edx
        lea     ecx, [ebp - 0x24]
        call    FUN_00580540

        push    0
        lea     eax, [ebp - 0x24]
        push    eax
        push    ebx
        call    FUN_00566ef0

        mov     esi, dword ptr [ebp - 0x24]
        mov     eax, dword ptr [ebp - 0x20]
        add     esp, 0xc
        cmp     esi, eax
        jz      sub_group_done

        mov     edi, dword ptr [edi]

sub_group_loop:
        mov     eax, dword ptr [ebp - 8]
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [edi]
        push    1
        push    eax
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0x5c]
        test    al, al
        jz      found_match_false

        mov     eax, dword ptr [ebp - 0x20]
        add     esi, 4
        cmp     esi, eax
        jnz     sub_group_loop

        mov     edi, dword ptr [ebp - 0xc]

sub_group_done:
        lea     ecx, [ebp - 0x24]
        call    FUN_00580560
        jmp     continue_outer

not_group_type:
        cmp     ebx, -1
        jnz     resolve_object_id

        /* ebx == -1: use global */
        mov esi, dword ptr [DAT_0080d964]

        jmp     check_object2

resolve_object_id:
        mov al, byte ptr [DAT_007dde2c]

        mov     esi, ebx
        sar     esi, 0x18
        test    al, al
        jz      skip_assert2

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
        jz      skip_assert2
        cmp     esi, 0x12
        jl      skip_assert2
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert2
        int     3

skip_assert2:
        mov edx, dword ptr [DAT_007dab44]

        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_object

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
        jz      check_object

        mov eax, dword ptr [DAT_007dc690]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     check_object
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_object
        int     3

check_object:
        test    esi, esi
        jz      store_false
        cmp     esi, -1
        jz      store_false

check_object2:
        test    esi, esi
        jz      store_false

        mov     edx, dword ptr [ebp - 8]
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [ecx]
        push    1
        push    edx
        push    esi
        call    dword ptr [eax + 0x5c]
        test    al, al
        jz      store_false

continue_outer:
        mov     eax, dword ptr [ebp - 0x14]
        add     edi, 4
        cmp     edi, eax
        mov     dword ptr [ebp - 0xc], edi
        jz      found_all
        jmp     outer_loop

found_match_false:
        mov esi, dword ptr [DAT_0080592c]

        mov eax, dword ptr [DAT_00805928]

        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok_false
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok_false:
        mov     dword ptr [esi], 0

        mov esi, dword ptr [DAT_0080d9b0]

        lea     ecx, [ebp - 0x24]
        call    FUN_00580560
        jmp     done_epilogue

store_false:
        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000

        mov dword ptr [DAT_0080592c], esi

        cmp     esi, edx

alloc_check_store0:
        jc      alloc_ok_store0
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok_store0:
        mov     dword ptr [esi], 0
        jmp     done_common

found_all:
        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok_true
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok_true:
        mov     dword ptr [esi], 1

done_common:
        mov esi, dword ptr [DAT_0080d9b0]

done_epilogue:
        lea     ecx, [ebp - 0x18]
        call    FUN_00580560

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi

        mov dword ptr [DAT_00805918], eax

        mov     eax, esi
        pop     esi

        mov dword ptr [DAT_00805908], ecx

        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}

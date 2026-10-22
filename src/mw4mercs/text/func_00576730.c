/* FUN_00576730 - ABL opcode handler: group contains object */
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
#define ADDR_DAT_0080d9bc  0x0080d9bc
#define ADDR_DAT_0080d964  0x0080d964
#define ADDR_DAT_007dde2c  0x007dde2c

/* External ABL functions */
extern void __cdecl FUN_0064db40(void);
extern char __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_005666d0(const char *str);
extern int  __cdecl FUN_006fabf0(int param);
extern int  __cdecl FUN_00566c30(int param, void *buf, int flag);
extern char __cdecl FUN_00566c10(int param);
extern int  __cdecl FUN_005668b0(int param);
extern void __cdecl FUN_00580540(void *param);
extern void __cdecl FUN_00566ef0(int param);
extern void __cdecl FUN_00580630(void *ptr, int count);
extern void __cdecl FUN_005805a0(void *ptr, int count);
extern char __cdecl FUN_0063afb0(int param1, int param2);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) void FUN_00576730(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_00805928;
extern int DAT_0080d9bc;
extern int DAT_0080d964;
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x10

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

        mov     edi, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      skip_assert

        push    edi
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jz      skip_assert

        push    0x781170
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
        push    edi
        call    FUN_00566c30
        mov     ebx, eax

        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        add     esp, 4
        inc     eax

        mov dword ptr [DAT_00805908], edx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        mov eax, dword ptr [DAT_0080592c]

        mov     esi, dword ptr [eax]
        sub     eax, 4
        cmp     esi, -2

        mov dword ptr [DAT_0080592c], eax

        jnz     not_minus2

        /* esi == -2 (0xFFFFFFFE): restore stack */
        add     eax, 4
        mov     esi, eax

        mov dword ptr [DAT_0080592c], eax

        mov eax, dword ptr [DAT_00805928]

        add     eax, 0xa000
        cmp     esi, eax
        jc      store_zero
        jmp     alloc_fallback

not_minus2:
        push    edi
        call    FUN_00566c10
        add     esp, 4
        cmp     al, 1
        jnz     case_not_one

        /* Group type (cVar2 == 1): check if object is in group */
        push    esi
        call    FUN_005668b0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      group_not_found

        lea     edx, [ebp - 1]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_00580540

        push    0
        lea     eax, [ebp - 0x10]
        push    eax
        push    ebx
        call    FUN_00566ef0

        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0xc]
        add     esp, 0xc
        cmp     edx, ecx
        mov     eax, edx
        jz      search_done

search_loop:
        cmp     dword ptr [eax], esi
        jz      found_match
        add     eax, 4
        cmp     eax, ecx
        jnz     search_loop

search_done:
        mov     eax, dword ptr [ebp - 8]
        sub     eax, edx
        sar     eax, 2
        push    eax
        push    edx
        call    FUN_00580630
        add     esp, 8

group_not_found:
        mov esi, dword ptr [DAT_0080592c]

        mov ecx, dword ptr [DAT_00805928]

        add     esi, 4
        add     ecx, 0xa000
        cmp     esi, ecx

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok1
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok1:
        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        pop     edi
        inc     eax
        mov     dword ptr [esi], 0
        pop     esi

        mov dword ptr [DAT_00805918], eax

        mov eax, dword ptr [DAT_0080d9bc]

        mov dword ptr [DAT_00805908], edx

        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

found_match:
        mov esi, dword ptr [DAT_0080592c]

        mov ecx, dword ptr [DAT_00805928]

        add     esi, 4
        add     ecx, 0xa000
        cmp     esi, ecx

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok2
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok2:
        mov     dword ptr [esi], 1

        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 8]

        mov esi, dword ptr [DAT_0080d9bc]

        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        lea     ecx, [ebp - 8]
        call    FUN_005805a0

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

case_not_one:
        cmp     esi, -1
        jnz     check_nonneg

        /* esi == -1 (0xFFFFFFFF): check global */
        mov eax, dword ptr [DAT_0080d964]

        test    eax, eax
        jz      alloc_store0

        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      alloc_store0

        mov     esi, dword ptr [eax + 0x30]
        /* fall through to check_nonneg */

check_nonneg:
        test    esi, esi
        jl      alloc_store0

        push    ebx
        push    esi
        call    FUN_0063afb0

        mov esi, dword ptr [DAT_0080592c]

        mov     bl, al

        mov eax, dword ptr [DAT_00805928]

        add     esi, 4
        add     eax, 0xa000
        add     esp, 8
        cmp     esi, eax

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok3
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok3:
        xor     ecx, ecx
        test    bl, bl
        setnz   cl
        mov     dword ptr [esi], ecx
        jmp     done_epilogue

alloc_store0:
        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx

        mov dword ptr [DAT_0080592c], esi

        jc      store_zero

alloc_fallback:
        push    0
        call    FUN_00563060
        add     esp, 4

store_zero:
        mov     dword ptr [esi], 0

done_epilogue:
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi

        mov dword ptr [DAT_00805918], eax

        mov eax, dword ptr [DAT_0080d9b0]

        mov dword ptr [DAT_00805908], ecx

        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}

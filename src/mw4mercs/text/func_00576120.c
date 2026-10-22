/* FUN_00576120 - ABL opcode handler: group/entity query */
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
#define ADDR_DAT_007dde2c  0x007dde2c

/* External ABL functions */
extern void __cdecl FUN_0064db40(void);
extern char __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_005666d0(const char *str);
extern int  __cdecl FUN_006fabf0(int param);
extern char __cdecl FUN_00566c10(int param);
extern void __cdecl FUN_00580540(void *param);
extern int  __cdecl FUN_00566c30(int param, void *buf, int flag);
extern void __cdecl FUN_00566ef0(int param);
extern void __cdecl FUN_00580580(void *a, void *b);
extern void __cdecl FUN_00580630(void *ptr, int count);
extern char __cdecl FUN_0063ad60(int param);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) void FUN_00576120(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_00805928;
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x20

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        inc     eax
        push    esi

        mov dword ptr [DAT_00805908], ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        mov eax, dword ptr [DAT_0080592c]

        mov     esi, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      skip_assert

        push    esi
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jz      skip_assert

        push    0x7810a8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
        push    esi
        call    FUN_00566c10
        add     esp, 4
        cmp     al, 1
        jnz     case_not_one

        lea     edx, [ebp - 1]
        push    edx
        lea     ecx, [ebp - 0x20]
        call    FUN_00580540

        push    0
        lea     eax, [ebp - 0x20]
        push    eax
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_00566ef0

        mov     ecx, dword ptr [ebp - 0x1c]
        sub     ecx, dword ptr [ebp - 0x20]
        add     esp, 0xc
        test    ecx, 0xfffffffc
        jz      aligned_zero

        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok1
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok1:
        mov     dword ptr [esi], 0
        jmp     done_common

aligned_zero:
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 1]
        push    ecx
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], 0
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 8], 0
        call    FUN_00580580

        push    1
        lea     edx, [ebp - 0x14]
        push    edx
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_00566ef0

        mov     esi, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [DAT_00805928]

        sub     eax, esi
        mov esi, dword ptr [DAT_0080592c]

        add     esp, 0xc
        test    eax, 0xfffffffc
        setnz   bl

        add     esi, 4
        add     ecx, 0xa000
        cmp     esi, ecx

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok2
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok2:
        xor     edx, edx
        test    bl, bl
        setnz   dl
        mov     dword ptr [esi], edx

        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0xc]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call    FUN_00580630
        add     esp, 8

done_common:
        mov     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x18]
        mov esi, dword ptr [DAT_0080d9b0]

        sub     edx, eax
        sar     edx, 2
        push    edx
        push    eax
        call    FUN_00580630

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        add     esp, 8
        inc     eax

        mov dword ptr [DAT_00805918], eax

        mov     eax, esi
        pop     esi

        mov dword ptr [DAT_00805908], ecx

        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

case_not_one:
        push    esi
        call    FUN_00566c30
        push    eax
        call    FUN_0063ad60

        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        add     esp, 8
        cmp     esi, edx
        mov     bl, al

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok3
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok3:
        xor     eax, eax
        test    bl, bl
        setnz   al
        mov     dword ptr [esi], eax

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
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

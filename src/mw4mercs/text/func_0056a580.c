/* FUN_0056a580 - ABL opcode handler: find nearest/greatest threat */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern void __cdecl FUN_0064db40(void);
extern int  __cdecl FUN_00566bf0(int id);
extern int  __cdecl FUN_00566c30(int a, float b);
extern int  __cdecl FUN_005669d0(int id);
extern int  __cdecl FUN_0056a3c0(int a, float b);
extern int  __cdecl FUN_0056a3e0(unsigned int a, int b);
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) void FUN_0056a580(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_00805928;
extern int DAT_007dde2c;
extern int DAT_0080d9bc;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
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

        mov     ecx, dword ptr [eax]
        sub     eax, 4
        push    esi
        mov     dword ptr [ebp - 4], ecx

        mov dword ptr [DAT_0080592c], eax

        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jnz     not_vector

        fild    dword ptr [ebp - 4]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_0056a3e0

        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        add     esp, 8
        cmp     esi, edx
        mov     edi, eax

        mov dword ptr [DAT_0080592c], esi

        jc      store_result
        jmp     overflow

not_vector:
        push    esi
        call    FUN_005669d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jnz     check_dead

        mov esi, dword ptr [DAT_0080592c]

        mov eax, dword ptr [DAT_00805928]

        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax

        mov dword ptr [DAT_0080592c], esi

        jc      store_minus2
        push    0
        call    FUN_00563060
        add     esp, 4

store_minus2:
        mov     dword ptr [esi], -2
        jmp     done

check_dead:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      do_call2

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      do_call2

        push    0x77fc54
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      do_call2
        int     3

do_call2:
        fild    dword ptr [ebp - 4]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_0056a3c0

        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        add     esp, 8
        cmp     esi, edx
        mov     edi, eax

        mov dword ptr [DAT_0080592c], esi

        jc      store_result

overflow:
        push    0
        call    FUN_00563060
        add     esp, 4

store_result:
        mov     dword ptr [esi], edi

done:
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi

        mov dword ptr [DAT_00805918], eax

        mov eax, dword ptr [DAT_0080d9bc]

        mov dword ptr [DAT_00805908], ecx

        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}

/* FUN_0056b000 - ABL opcode handler: set AI group skills */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __stdcall FUN_005805c0(void *a, void *b);
extern int  __cdecl FUN_00580be0(int param1, void *param2);
extern void __cdecl thunk_FUN_00600940(void);
extern int  __stdcall FUN_0064e600(int param1);  /* __thiscall: ECX=this */
extern int  __stdcall FUN_0064e540(int param1);  /* __thiscall: ECX=this */
extern int  __stdcall FUN_0064e100(void);         /* __thiscall: ECX=this */
extern int  __stdcall FUN_004fcb30(int id);
extern int  __stdcall FUN_00415230(int arg);
extern void __stdcall FUN_00580a00(void *this);   /* __thiscall: ECX=this */
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_0056b000(unsigned int param_1, int param_2, int param_3, int param_4)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f24d8;
extern int DAT_007dde2c;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        xor     eax, eax
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 8], eax
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 1]
        push    ecx
        lea     ecx, [ebp - 0xc]
        call    FUN_005805c0

        mov     esi, dword ptr [ebp + 8]
        test    esi, 0xf00000
        jz      not_handle

        lea     edx, [ebp - 0x14]
        push    edx
        add     esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add     esp, 8
        jmp     after_loop

not_handle:
        call    thunk_FUN_00600940
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0064e600
        test    al, al
        jz      after_loop

        push    esi
        mov     ecx, edi
        call    FUN_0064e540
        mov     ebx, eax
        mov     ecx, ebx
        call    FUN_0064e100
        mov     edi, dword ptr [eax]
        mov     ecx, ebx
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jz      after_loop

loop_start:
        mov eax, dword ptr [DAT_007dab44]

        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      next_iter

        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jnz     next_iter

        mov eax, dword ptr [DAT_007f268c]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_iter

        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      next_iter

        mov eax, dword ptr [DAT_007f24d8]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     next_iter

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     next_iter

        lea     eax, [ebp + 8]
        push    eax
        lea     ecx, [ebp - 0x14]
        mov     dword ptr [ebp + 8], esi
        call    FUN_00580a00

next_iter:
        mov     ecx, ebx
        add     edi, 4
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jnz     loop_start

after_loop:
        mov     esi, dword ptr [ebp - 0x14]
        cmp     esi, dword ptr [ebp - 0x10]
        jz      check_free

        mov     edi, dword ptr [ebp + 0x14]
        mov     ebx, dword ptr [ebp + 0x10]

inner_loop:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, -1
        jz      check_gunnery

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      set_pilot

        mov     edx, dword ptr [esi]
        mov     al, byte ptr [edx + 0x2f9]
        test    al, al
        jnz     set_pilot

        push    0x77fe1c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      set_pilot_cont
        int     3

set_pilot_cont:
        mov     ecx, dword ptr [ebp + 0xc]

set_pilot:
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + 0x180], ecx
        mov     dword ptr [eax + 0x1b0], ecx

check_gunnery:
        cmp     ebx, -1
        jz      check_elite

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      set_gunnery

        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        jnz     set_gunnery

        push    0x77fde4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      set_gunnery
        int     3

set_gunnery:
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + 0x17c], ebx
        mov     dword ptr [eax + 0x1ac], ebx

check_elite:
        cmp     edi, -1
        jz      next_group

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      set_elite

        mov     ecx, dword ptr [esi]
        mov     al, byte ptr [ecx + 0x2f9]
        test    al, al
        jnz     set_elite

        push    0x77fdac
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      set_elite
        int     3

set_elite:
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + 0x184], edi
        mov     dword ptr [eax + 0x1b4], edi

next_group:
        mov     eax, dword ptr [ebp - 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     inner_loop

        mov     esi, dword ptr [ebp - 0x14]

check_free:
        test    esi, esi
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4

done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}

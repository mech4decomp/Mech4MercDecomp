/* FUN_0056b210 - ABL opcode handler: set AI skills (pilot/gunnery/elite) */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_00566c30(int a, int b, int c, int d);
extern void __cdecl FUN_0056b000(int param);
extern int  __cdecl FUN_005669d0(int param);
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern char __cdecl FUN_00415230(int arg);
extern void __cdecl FUN_0064db40(void);

extern int  DAT_00805918;   /* stream pointer */
extern int  DAT_00805908;   /* last byte read */
extern int  DAT_0080592c;   /* value stack pointer */
extern char DAT_007dde2c;   /* debug flag */
extern int  DAT_007f24d8;   /* string/object pointer */

__declspec(naked) void __cdecl FUN_0056b210(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx

        /* Read first signed byte from stream + advance by 2 */
        mov     eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi

        mov     dword ptr [DAT_00805908], ecx

        mov     dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop first int from stack (ESI = object id) */
        mov     eax, dword ptr [DAT_0080592c]

        mov     esi, [eax]
        sub     eax, 4

        mov     dword ptr [DAT_0080592c], eax

        /* Read next byte from stream */
        mov     eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        inc     eax

        mov     dword ptr [DAT_00805908], edx

        mov     dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop second int from stack (EDI = pilot skill) */
        mov     eax, dword ptr [DAT_0080592c]

        mov     edi, [eax]
        sub     eax, 4

        mov     dword ptr [DAT_0080592c], eax

        /* Read next byte from stream */
        mov     eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax

        mov     dword ptr [DAT_00805908], ecx

        mov     dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop third int from stack (EBX = gunnery skill) */
        mov     eax, dword ptr [DAT_0080592c]

        mov     ebx, [eax]
        sub     eax, 4

        mov     dword ptr [DAT_0080592c], eax

        /* Read next byte from stream */
        mov     eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        inc     eax

        mov     dword ptr [DAT_00805908], edx

        mov     dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop fourth int from stack (ECX = elite skill, stored at [ebp-4]) */
        mov     eax, dword ptr [DAT_0080592c]

        mov     ecx, [eax]
        sub     eax, 4
        push    esi
        mov     [ebp - 4], ecx

        mov     dword ptr [DAT_0080592c], eax

        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jnz     not_handle

        /* Handle case: call FUN_00566c30 then FUN_0056b000 */
        mov     edx, [ebp - 4]
        push    edx
        push    ebx
        push    edi
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_0056b000
        add     esp, 0x10
        jmp     epilogue

not_handle:
        push    esi
        call    FUN_005669d0
        mov     esi, eax

        mov     al, byte ptr [DAT_007dde2c]

        add     esp, 4
        test    al, al
        jz      check_esi_zero
        cmp     esi, -1
        jnz     check_esi_zero

        /* Assert: "tried to set the skills for a non-ai" */
        push    0x77fed8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_dead_flag
        int     3
        jmp     check_dead_flag

check_esi_zero:
        test    esi, esi
        jz      epilogue

check_dead_flag:
        mov     al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_pilot

        mov     eax, dword ptr [DAT_007f24d8]

        mov     ecx, [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     check_pilot

        push    0x77fed8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_pilot
        int     3

check_pilot:
        cmp     edi, -1
        jz      check_gunnery

        mov     al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      set_pilot

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      set_pilot

        push    0x77feac
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      set_pilot
        int     3

set_pilot:
        mov     [esi + 0x180], edi
        mov     [esi + 0x1b0], edi

check_gunnery:
        cmp     ebx, -1
        jz      check_elite

        mov     al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      set_gunnery

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      set_gunnery

        push    0x77fe80
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      set_gunnery
        int     3

set_gunnery:
        mov     [esi + 0x17c], ebx
        mov     [esi + 0x1ac], ebx

check_elite:
        mov     edi, [ebp - 4]
        cmp     edi, -1
        jz      epilogue

        mov     al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      set_elite

        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      set_elite

        push    0x77fe54
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      set_elite
        int     3

set_elite:
        mov     [esi + 0x184], edi
        mov     [esi + 0x1b4], edi

epilogue:
        /* Read final byte from stream */
        mov     eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi

        mov     dword ptr [DAT_00805918], eax

        mov     dword ptr [DAT_00805908], ecx

        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

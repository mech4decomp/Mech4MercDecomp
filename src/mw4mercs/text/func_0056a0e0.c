/* FUN_0056a0e0 - ABL opcode handler: nearest point on path computation */
#ifdef _MSC_VER
#pragma warning(disable: 4731)  /* frame pointer register 'ebp' modified by inline assembly code */
#endif

#include <windows.h>

/* ABL runtime globals (absolute addresses) */
#define ADDR_DAT_00805918  0x00805918
#define ADDR_DAT_00805908  0x00805908
#define ADDR_DAT_0080592c  0x0080592c
#define ADDR_DAT_00805928  0x00805928
#define ADDR_DAT_0080d9bc  0x0080d9bc
#define ADDR_DAT_0080d964  0x0080d964
#define ADDR_DAT_007dde2c  0x007dde2c
#define ADDR_DAT_007dab44  0x007dab44
#define ADDR_DAT_007dab40  0x007dab40
#define ADDR_DAT_007f211c  0x007f211c
#define ADDR_DAT_007dc690  0x007dc690

/* External functions */
extern void __cdecl FUN_0064db40(void);
extern int  __cdecl FUN_0064d3d0(int param1, int param2);
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern int  __stdcall FUN_004fcb30(int id);
extern int  __stdcall FUN_00415230(int arg);
extern int  __cdecl FUN_00566bf0(int id);
extern int  __cdecl FUN_00566c30(int id);
extern int  __cdecl FUN_00569cb0(void *dst, int src);
extern int  __cdecl FUN_00566b90(int id);
extern int  __stdcall FUN_005b8850(void *a, void *b);  /* __thiscall: ECX=this, stack=2 args, callee cleans up */

/* _ftol is MSVC CRT intrinsic for float-to-long conversion */
long _ftol(void);

__declspec(naked) void FUN_0056a0e0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f211c;
extern int DAT_0080d964;
extern int DAT_007dc690;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x28

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

        mov     edi, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax

        mov dword ptr [DAT_00805908], ecx

        mov     ecx, dword ptr [eax]
        add     eax, 4
        push    2
        push    ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064d3d0

        mov eax, dword ptr [DAT_0080592c]

        mov     ebx, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov al, byte ptr [DAT_007dde2c]

        add     esp, 8
        test    al, al
        jz      skip_assert1

        cmp     edi, -1
        jnz     skip_assert1

        push    0x77fc40
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert1
        int     3
skip_assert1:

        mov edx, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [edx]

        mov eax, dword ptr [DAT_007dab40]

        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edi, eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        mov     dword ptr [ebp - 4], edi
        jz      skip_assert2

        mov eax, dword ptr [DAT_007f211c]

        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     skip_assert2

        push    0x77fc00
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert2
        int     3
skip_assert2:

        push    esi
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jnz     not_vector

        push    esi
        call    FUN_00566c30
        push    eax
        lea     eax, [ebp - 0x1c]
        push    eax
        call    FUN_00569cb0
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0xc], edx
        mov     eax, dword ptr [eax + 8]
        add     esp, 12
        mov     dword ptr [ebp - 8], eax
        jmp     after_type_check

not_vector:
        cmp     esi, -1
        jnz     check_obj_id

        mov eax, dword ptr [DAT_0080d964]

        jmp     do_lookup

check_obj_id:
        mov al, byte ptr [DAT_007dde2c]

        mov     edi, esi
        sar     edi, 24
        test    al, al
        jz      check_obj_id2

        test    edi, edi
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
        jz      check_obj_id2

        cmp     edi, 0x12
        jl      check_obj_id2

        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_obj_id2
        int     3

check_obj_id2:
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]

        mov eax, dword ptr [DAT_007dab40]

        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_null

        test    esi, esi
        jnz     check_type2

        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_type2
        int     3

check_type2:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_null

        mov eax, dword ptr [DAT_007dc690]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     check_null

        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_null
        int     3

check_null:
        test    esi, esi
        jnz     not_null
        xor     eax, eax
        jmp     do_lookup
not_null:
        xor     eax, eax
        cmp     esi, -1
        setz    al
        dec     eax
        and     eax, esi

do_lookup:
        push    eax
        call    FUN_00566b90
        add     esp, 4
        test    eax, eax
        jnz     got_object

        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi

        mov dword ptr [DAT_00805918], eax

        mov dword ptr [DAT_00805908], edx

        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

got_object:
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 4]
        add     eax, 0x80
        mov     eax, ecx
        mov     dword ptr [ebp - 0x18], ecx
        mov     ecx, edx
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 8], ecx

after_type_check:
        lea     edx, [ebp - 0x10]
        push    edx
        lea     eax, [ebp - 0x28]
        push    eax
        mov     ecx, edi
        call    FUN_005b8850

        fld     dword ptr [eax]
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x14], edx
        call    _ftol

        fld     dword ptr [ebp - 0x18]
        mov     dword ptr [ebx], eax
        call    _ftol

        fld     dword ptr [ebp - 0x14]
        mov     dword ptr [ebx + 4], eax
        call    _ftol
        mov     dword ptr [ebx + 8], eax

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi

        mov dword ptr [DAT_00805918], eax

        mov dword ptr [DAT_00805908], ecx

        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}

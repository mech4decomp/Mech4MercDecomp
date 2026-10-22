/*
 * FUN_00539960 (309 B) — __thiscall method, RET 0x10.
 *
 * Dispatches based on a type byte (param2):
 * - Type 6: checks global index match, calls FUN_00536FB0
 * - Types 4,5,8: returns immediately
 * - Other types: calls FUN_00536FB0
 * If the object's +0x16 flag is false or sub-object is null:
 * - Calls FUN_00539AA0 with global index
 * - If returns 0, checks sub-type and calls FUN_00629290/FUN_00625820
 * - Falls through to FUN_00536FB0 for types 0,7,8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void FUN_00536fb0(int a, int b, int c, int d);
extern char FUN_00539aa0(int a, int b, int c, int d);
extern void *FUN_00629290(int a);
extern void FUN_00625820(int a, int b, int c, int d);

/* Global data references */
extern int DAT_007db090;
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_00539960(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [DAT_007db090]
        test    ecx, ecx
        push    edi
        jz      epilogue

        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      no_active

        mov     eax, dword ptr [esi + 0x50]
        mov     edx, dword ptr [eax + 0x10]
        test    edx, edx
        jz      no_active

        mov     eax, dword ptr [esp + 0x1c]
        cmp     al, 6
        mov     edx, dword ptr [esp + 0x20]
        jnz     check_type_8

        cmp     dl, byte ptr [ecx + 0x28]
        jnz     epilogue

        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_00536fb0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10

    check_type_8:
        cmp     al, 8
        jz      epilogue
        cmp     al, 4
        jz      epilogue
        cmp     al, 5
        jz      epilogue

        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_00536fb0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10

    no_active:
        mov     al, byte ptr [ecx + 0x28]
        mov     edi, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x10], al
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_00539aa0
        test    al, al
        jnz     epilogue

        mov     edx, dword ptr [esi + 0x4c]
        cmp     dword ptr [edx + 0x14], 5
        jnz     check_final

        cmp     bl, 7
        jz      call_36fb0
        cmp     bl, 8
        jz      check_final

        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        push    0xd
        xor     ecx, 0x85739531
        call    FUN_00629290
        test    eax, eax
        jz      check_final

        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        push    0xd
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     edx, dword ptr [esp + 0x24]
        push    edi
        push    ebx
        push    ebp
        push    edx
        mov     ecx, eax
        call    FUN_00625820

    check_final:
        cmp     bl, 7
        jz      call_36fb0
        cmp     bl, 8
        jz      call_36fb0
        test    bl, bl
        jnz     epilogue

    call_36fb0:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    edi
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_00536fb0

    epilogue:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}

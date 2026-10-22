/*
 * FUN_00733680 (66 B) — __stdcall RET 0xC (3 params).
 *
 * Calls FUN_004084c0(0x104, DAT_008aa284) to allocate an object.
 * If non-null, calls FUN_00733c20(param_3, 1) (thiscall on the new
 * object). Stores the result in *param_1, and if param_2 != 0 stores
 * the object's +0xE8 field into *param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aa284;
extern void *__cdecl FUN_004084c0(int, int);
extern void *__cdecl FUN_00733c20(void *, int);

__declspec(naked) void __stdcall FUN_00733680(int *param_1, int *param_2, int param_3)
{
    __asm {
        mov     eax, dword ptr [g_008aa284]
        push    eax
        push    0x104
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_a7
        mov     ecx, dword ptr [esp + 0xC]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_00733c20
        jmp     L_a9
L_a7:
        xor     eax, eax
L_a9:
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx], eax
        jz      L_bf
        mov     eax, dword ptr [eax + 0xE8]
        mov     dword ptr [ecx], eax
L_bf:
        ret     0xC
    }
}

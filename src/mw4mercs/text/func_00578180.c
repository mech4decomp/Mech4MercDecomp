/*
 * FUN_00578180 (240 B) — Script bytecode interpreter: another comparison/assignment op.
 *
 * Reads a bytecode stream from global pointer DAT_00805918, pops values
 * from a global stack DAT_0080592c, performs comparisons and assignments
 * based on the bytecode opcode. Similar to FUN_00577B30 but calls
 * FUN_005AE8C0 instead of FUN_005AE4A0.
 *
 * __cdecl, returns 0.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_00577610(void);
extern int __cdecl FUN_0064DB40(void);
extern int __cdecl FUN_00577530(int param);
extern int __cdecl FUN_005666D0(const char *msg);
extern int __cdecl FUN_006FABF0(int param);
extern int __cdecl FUN_00415230(int this, int param);
extern void __cdecl FUN_005AE8C0(int this, float param1, int param2);

__declspec(naked) int __cdecl FUN_00578180(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_0078096c;
extern int DAT_00779d44;
extern int DAT_007dde2c;
extern int DAT_007f211c;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_00577610
        mov     edi, eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064DB40
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064DB40
        mov eax, dword ptr [DAT_0080592c]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 4], edx
        sub     eax, 4
        fild    dword ptr [ebp - 4]
        push    esi
        mov dword ptr [DAT_0080592c], eax
        fmul dword ptr [DAT_0078096c]
        fmul dword ptr [DAT_00779d44]
        fstp    dword ptr [ebp - 4]
        call    FUN_00577530
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        add     esp, 4
        test    al, al
        jz      l_skip_assert
        mov eax, dword ptr [DAT_007f211c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert
        push    0x781288
        call    FUN_005666D0
        push    eax
        call    FUN_006FABF0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert
        int     3
l_skip_assert:
        test    edi, edi
        jz      l_skip_call
        mov     eax, dword ptr [ebp - 4]
        push    esi
        push    eax
        mov     ecx, edi
        call    FUN_005AE8C0
l_skip_call:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}

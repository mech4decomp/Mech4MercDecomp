/*
 * FUN_0054c4d0 (193 B) — __thiscall method.
 * ECX = this pointer, one param on stack (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054c4d0(void)
{
    

extern void __cdecl FUN_0061acd0(void);
extern void __cdecl FUN_0061acf9(void);
extern int DAT_007dd234;
extern void __cdecl FUN_006f4903(void);
extern void __cdecl FUN_004084d0(void);
extern int DAT_007b8c10;
extern void __cdecl FUN_100415115(void);
extern void __cdecl FUN_100417922(void);
extern void __cdecl FUN_006f490d(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_005bea6f(void);
__asm {
push    ebx
        push    edi
        mov     edi, ecx

        mov     al, byte ptr [edi + 0x589]
        xor     ebx, ebx
        cmp     al, bl
        jnz     L_0054C58C

        cmp     byte ptr [edi + 0x5AC], bl
        jnz     L_0054C58C

        push    0x8000
        call FUN_0061acd0

        mov     ecx, eax
        call FUN_0061acf9

        test    al, al
        jz      L_0054C58C

        mov     eax, dword ptr [edi + 0x2F8]
        cmp     eax, 4
        jge     L_0054C58C

        inc     eax
        mov     dword ptr [edi + 0x2F8], eax

        mov eax, dword ptr [DAT_007dd234]

        push    esi
        push    eax
        call FUN_006f4903

        push    0x14
        call FUN_004084d0

        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L_0054C553

        mov ecx, dword ptr [DAT_007b8c10]

        push    ecx
        mov     ecx, esi
        call FUN_100415115

        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0x0C], ebx
        mov     dword ptr [esi], 0x77D04C
        jmp     L_0054C555

L_0054C553:
        xor     esi, esi

L_0054C555:
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        lea     ecx, [edi + 0x2F0]
        mov     dword ptr [esi + 0x10], ebx
        call FUN_100417922

        call FUN_006f490d

        mov edx, dword ptr [DAT_007dab44]

        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, 0x85739531
        call FUN_005bea6f

        pop     esi

L_0054C58C:
        pop     edi
        pop     ebx
        ret     4
    }


}

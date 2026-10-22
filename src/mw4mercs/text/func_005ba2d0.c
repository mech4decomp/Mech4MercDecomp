/*
 * FUN_005ba2d0 (216 B) — Searches sub-object lists at +0x1d4/+0x254 for a
 * matching object, updating the current-index field at +0x1b4.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);
extern void FUN_00415230(void);

__declspec(naked) void __fastcall FUN_005ba2d0(void)
{
    

extern int DAT_007f2568;
__asm {
push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x1b4]
        push    edi
        mov     edi, dword ptr [ebx + 0x17c]
        cmp     eax, edi
        jge     L306
        mov     ecx, dword ptr [ebx + eax*0x4 + 0x1d4]
        add     ecx, 0x10
        call    FUN_0041fd80
        mov     ebp, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jnz     L30A
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L306:
        mov     ebp, dword ptr [esp + 0x14]
L30A:
        xor     esi, esi
        test    edi, edi
        jle     L332
        lea     edi, [ebx + 0x1d4]
L316:
        mov     ecx, dword ptr [edi]
        add     ecx, 0x10
        call    FUN_0041fd80
        cmp     eax, ebp
        jz      L37B
        mov     eax, dword ptr [ebx + 0x17c]
        inc     esi
        add     edi, 0x4
        cmp     esi, eax
        jl      L316
L332:
        test    ebp, ebp
        jz      L39F
        mov eax, dword ptr [DAT_007f2568]
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L39F
        mov     ebp, dword ptr [ebx + 0x180]
        xor     esi, esi
        test    ebp, ebp
        jle     L39F
        lea     edi, [ebx + 0x254]
L35A:
        mov     ecx, dword ptr [edi]
        add     ecx, 0x10
        call    FUN_0041fd80
        cmp     eax, dword ptr [esp + 0x14]
        jz      L38A
        inc     esi
        add     edi, 0x4
        cmp     esi, ebp
        jl      L35A
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L37B:
        pop     edi
        mov     dword ptr [ebx + 0x1b4], esi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L38A:
        mov     eax, dword ptr [ebx + 0x17c]
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x1b4], eax
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L39F:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
    }


}

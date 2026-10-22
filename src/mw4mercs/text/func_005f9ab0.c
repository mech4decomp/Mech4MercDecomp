/*
 * FUN_005f9ab0 (218 B) — __thiscall, two stack args (param_1, param_2).
 * If param_1==3 and a flag bit in this+0x10 is clear: dispatch a virtual
 * call (this+0x2fc / FUN_006769c0), FUN_004da2f0(3), optional virtual
 * this+0xd8, then a render/update path that builds a 4-byte {word,word}
 * struct on the stack for FUN_005fad50 and calls FUN_005fa300. Finally
 * FUN_004da620(param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0080da94;

extern void FUN_006769c0(void);
extern void FUN_004da2f0(void);
extern void FUN_005fa300(void);
extern void FUN_0041fd80(void);
extern void FUN_005fad50(void);
extern void FUN_0041fcb0(void);
extern void FUN_0041fcd0(void);
extern void FUN_004da5d0(void);
extern void FUN_004da620(void);

__declspec(naked) void FUN_005f9ab0(void)
{
    __asm {
        cmp     dword ptr [esp+0x4], 0x3
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x10]
        push    esi
        push    edi
        mov     esi, ecx
        jnz     L_9b76
        mov     eax, dword ptr [esi+0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_9b76
        mov     ecx, dword ptr [esi+0x2fc]
        test    ecx, ecx
        jz      L_9ae7
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx+0x12c]
        jmp     L_9af3
    L_9ae7:
        mov     ecx, dword ptr [DAT_0080da94]
        push    esi
        call    FUN_006769c0
    L_9af3:
        push    0x3
        mov     ecx, esi
        call    FUN_004da2f0
        cmp     ebp, 0x3
        jz      L_9b0b
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0xd8]
    L_9b0b:
        mov     edx, dword ptr [esi+0x78]
        lea     ecx, [esi+0x78]
        call    dword ptr [edx+0x4]
        push    0
        mov     edi, eax
        push    esi
        lea     eax, [edi+0x68]
        push    eax
        mov     ecx, esi
        call    FUN_005fa300
        lea     ebx, [esi+0x148]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_9b63
        mov     dx, word ptr [edi+0x66]
        push    ecx
        mov     cx, word ptr [edi+0x64]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     ecx, esi
        mov     word ptr [eax+0x2], dx
        call    FUN_005fad50
        mov     edi, eax
        test    edi, edi
        jz      L_9b63
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
    L_9b63:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0xd4]
        push    0x3
        mov     ecx, esi
        call    FUN_004da5d0
    L_9b76:
        mov     ecx, dword ptr [esp+0x14]
        push    ebp
        push    ecx
        mov     ecx, esi
        call    FUN_004da620
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}

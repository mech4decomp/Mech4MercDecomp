/*
 * FUN_00725060 (extent 0x725060-0x725214) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_00856b8c;
extern int    g_00856b94;
extern char   g_00857f31;
extern char   g_008aadbc;
extern int    g_008aaec0;
extern void __cdecl FUN_00755c70(void);
extern void __cdecl FUN_00755cc0(void);
extern void __cdecl FUN_00755d50(void);
extern void __cdecl FUN_00756350(void);
extern void __cdecl FUN_00756510(void);
extern void __cdecl FUN_00756540(void);
extern void __cdecl FUN_00756940(void);
extern void __cdecl FUN_00756c00(void);
extern void __cdecl FUN_00757110(void);
extern void __cdecl FUN_00757c70(void);

__declspec(naked) void FUN_00725060(void)
{
    __asm {
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        je    L_507b
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x68], edx
L_507b:
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [g_00856b94]
        push    ebx
        xor    ebx, ebx
        cmp    eax, ebx
        push    esi
        push    edi
        je    L_520b
        cmp    byte ptr [g_00857f31], bl
        jne    L_520b
        cmp    byte ptr [g_008aadbc], bl
        jne    L_520b
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, dword ptr [eax*4 + 0x856a8c]
        mov    edi, dword ptr [esi + 0x9c]
        cmp    edi, 5
        jne    L_50d9
        mov    eax, dword ptr [esi + 0x70]
        cmp    eax, ebx
        je    L_520b
        cmp    dword ptr [eax + 0xec], ebx
        je    L_520b
        jmp    L_50e1
L_50d9:
        cmp    dword ptr [esi], ebx
        je    L_520b
L_50e1:
        push    0x858ac8
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, 4
        ja    L_51ec
        jmp    dword ptr [eax*4 + 0x725214]
        mov    ecx, esi
        call    FUN_00756c00
        mov    eax, dword ptr [esi + 0x9c]
        mov    ecx, 1
        cmp    eax, ecx
        mov    byte ptr [esi + 0x80], bl
        mov    byte ptr [esi + 0x83], bl
        mov    byte ptr [esi + 0x82], cl
        je    L_5165
        cmp    eax, 2
        jmp    L_5153
        mov    ecx, esi
        call    FUN_00756c00
        mov    eax, dword ptr [esi + 0x9c]
        mov    ecx, 1
        mov    byte ptr [esi + 0x80], cl
        mov    byte ptr [esi + 0x83], bl
        mov    byte ptr [esi + 0x82], cl
        cmp    eax, ecx
L_5153:
        je    L_5165
        cmp    eax, ebx
        je    L_5165
        mov    ecx, esi
        call    FUN_00755d50
        jmp    L_51ec
L_5165:
        mov    byte ptr [esi + 0x98], cl
        jmp    L_51ec
        cmp    edi, 1
        je    L_5185
        cmp    edi, ebx
        je    L_5185
        mov    ecx, esi
        call    FUN_00756350
        mov    ecx, dword ptr [esi + 0x70]
        mov    dword ptr [ecx + 0x2c], ebx
        jmp    L_51ec
L_5185:
        mov    ecx, esi
        call    FUN_00755c70
        jmp    L_51ec
        mov    ecx, esi
        call    FUN_00756940
        test    al, al
        je    L_51ec
        mov    eax, dword ptr [esi + 0x9c]
        cmp    eax, 1
        je    L_51b1
        cmp    eax, ebx
        je    L_51b1
        mov    ecx, esi
        call    FUN_00756540
        jmp    L_51ec
L_51b1:
        mov    ecx, esi
        call    FUN_00756510
        jmp    L_51ec
        mov    ecx, dword ptr [g_00856b8c]
        call    FUN_00757110
        cmp    byte ptr [esi + 0x83], bl
        je    L_51ec
        mov    eax, dword ptr [esi + 0x9c]
        cmp    eax, 1
        je    L_51e5
        cmp    eax, ebx
        je    L_51e5
        mov    ecx, esi
        call    FUN_00755d50
        jmp    L_51ec
L_51e5:
        mov    ecx, esi
        call    FUN_00755cc0
L_51ec:
        cmp    dword ptr [g_008aaec0], ebx
        je    L_5200
        mov    esi, dword ptr [esi]
        cmp    esi, ebx
        je    L_5200
        push    esi
        call    FUN_00757c70
L_5200:
        push    0x858ac8
        call    dword ptr [g_0076b100]
L_520b:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00725214 (0 relocated pointers)
    }
}

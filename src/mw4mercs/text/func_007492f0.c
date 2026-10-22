/*
 * FUN_007492f0 (extent 0x7492f0-0x749481) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b204;
extern float  g_0076c5b0;
extern float  g_0077b648;
extern int    g_007b73d8;
extern int    g_00856b8c;
extern int    g_00857f34;
extern char   g_00858990;
extern char   g_00858ae0;
extern char   g_00858ae1;
extern char   g_0087bc34;
extern char   g_0087dd0a;
extern char   g_008aa28a;
extern int    g_008aaeb4;
extern int    g_008aaec0;
extern char   g_008b79ec;
extern void __cdecl FUN_007498a0(void);
extern void __cdecl FUN_00749cd0(void);
extern void __cdecl FUN_0075b4d0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_007492f0(void)
{
    __asm {
        sub    esp, 0x94
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        mov    dword ptr [esp + 4], 0x94
        call    dword ptr [g_0076b204]
        cmp    dword ptr [esp + 0x10], 2
        mov    byte ptr [g_008b79ec], 1
        jne    L_9331
        cmp    dword ptr [esp + 4], 5
        jge    L_9331
        xor    eax, eax
        mov    byte ptr [g_008b79ec], al
        mov    dword ptr [g_00857f34], eax
        add    esp, 0x94
        ret    
L_9331:
        mov    dword ptr [g_00857f34], 0
        add    esp, 0x94
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008b79ec]
        test    al, al
        push    esi
        je    L_937b
        mov    al, byte ptr [g_00858990]
        test    al, al
        jne    L_937b
        mov    esi, dword ptr [g_00857f34]
        test    esi, esi
        je    L_937b
L_936d:
        mov    ecx, esi
        call    FUN_00749cd0
        mov    esi, dword ptr [esi + 0x38]
        test    esi, esi
        jne    L_936d
L_937b:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008b79ec]
        push    ebx
        xor    ebx, ebx
        cmp    al, bl
        push    esi
        je    L_947e
        cmp    byte ptr [g_00858990], bl
        jne    L_947e
        cmp    dword ptr [g_008aaec0], ebx
        jne    L_947e
        cmp    byte ptr [g_0087bc34], bl
        je    L_93c9
        cmp    dword ptr [g_007b73d8], ebx
        je    L_947e
        cmp    dword ptr [g_008aaeb4], ebx
        jne    L_947e
L_93c9:
        mov    esi, dword ptr [g_00857f34]
        cmp    esi, ebx
        je    L_947e
        push    edi
L_93d8:
        mov    eax, dword ptr [esi + 0xc]
        cmp    eax, ebx
        je    L_93e8
        cmp    eax, 1
        jne    L_9472
L_93e8:
        cmp    byte ptr [g_00858ae1], bl
        je    L_9444
        cmp    byte ptr [g_008aa28a], bl
        jne    L_9444
        cmp    byte ptr [g_00858ae0], bl
        je    L_9444
        cmp    dword ptr [g_00856b8c], ebx
        je    L_946b
        mov    edi, dword ptr [esi + 8]
        cmp    edi, ebx
        je    L_946b
        fld    dword ptr [esi + 0x20]
        mov    byte ptr [g_0087dd0a], 1
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_942e
        push    0xffffd8f0
        push    edi
        jmp    L_9460
L_942e:
        fldln2    
        fld    dword ptr [esi + 0x20]
        fyl2x    
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        push    edi
        jmp    L_9460
L_9444:
        cmp    dword ptr [g_00856b8c], ebx
        je    L_946b
        mov    eax, dword ptr [esi + 8]
        cmp    eax, ebx
        je    L_946b
        push    0xffffd8f0
        mov    byte ptr [g_0087dd0a], 1
        push    eax
L_9460:
        call    FUN_0075b4d0
        mov    byte ptr [g_0087dd0a], bl
L_946b:
        mov    ecx, esi
        call    FUN_007498a0
L_9472:
        mov    esi, dword ptr [esi + 0x38]
        cmp    esi, ebx
        jne    L_93d8
        pop    edi
L_947e:
        pop    esi
        pop    ebx
        ret    
    }
}
